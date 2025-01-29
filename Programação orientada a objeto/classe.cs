public class Personagem 
{
    public string nome;
    public int altura;
    public int forca;
    public string raca;
    public int peso ;

    public void Set(string Name, int Altura, int Forca)
        {
            nome = Name;
            altura = Altura;
            forca = Forca;
        }
}


Personagem Goku = new Personagem();
Goku.Set("goku", 180, 10000);