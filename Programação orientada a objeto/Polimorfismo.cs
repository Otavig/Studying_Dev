public class Personagem 
{
    public override void AtaqueX()
    {
        Console.WriteLine("O personagem atacou e causou o dano base 1");
    }

    public override void AtaqueY()
    {
        Console.WriteLine("O personagem atacou e causou o dano base 1");
    }
}

public class Kratos : Personagem
{
    public override void AtaqueX()
    {
        Console.WriteLine("Kratos causou 100 de dano");
    }

    public override void AtaqueY()
    {
        Console.WriteLine("Kratos não causou dano");
    }
}

public class Mario : Personagem
{
    public override void AtaqueX()
    {
        Console.WriteLine("Mario causou 10 de dano");
    }
}
