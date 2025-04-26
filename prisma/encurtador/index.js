const express = require("express");
const cors = require("cors");
const { PrismaClient } = require("@prisma/client");
const dotenv = require("dotenv");
const path = require("path");

dotenv.config();

const prisma = new PrismaClient();
const app = express();

app.use(express.json());
app.use(cors());

const API = "/og";
const PORT = process.env.PORT || 3000;

const mensagens = {
  error: "Erro no sistema",
  success: "Requisição completa com sucesso"
};


app.get('/page', (req, res) => {
    res.sendFile(path.join(__dirname, 'public', 'index.html'));
});

app.post(`${API}`, async (req, res) => {
    const { route } = req.body;

    try {
        const newRoute = await prisma.routes.create({
        data: {
            url_generate: Math.random().toString(36).substring(2, 6).toUpperCase(),
            url_send: route,
            day_generate: new Date()
        }
        });

        res.status(201).json({ msg: mensagens.success, result: { newRoute } });
    } catch (error) {
        console.error("Erro:", error);
        res.status(500).json({ msg: mensagens.error });
    }
});

app.get(`${API}/:url`, async (req, res) => {
    const { url } = req.params;

    try {
        console.log(url);
        const data = await prisma.routes.findFirst({
            where: {
                url_generate: url
            },
            select: {
                url_send: true
            }
        })

        if (!data) {
            return res.status(404).json({ msg: "URL não encontrada" });
        }

        res.status(200).redirect(data?.url_send ?? "http://google.com");

    } catch (error) {
        console.error("Erro:", error);
        res.status(500).json({ msg: mensagens.error });
    }
});

app.listen(PORT, () => {
  console.log(`Servidor rodando na porta ${PORT}`);
});