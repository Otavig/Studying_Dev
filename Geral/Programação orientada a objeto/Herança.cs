public class Character 
{
    private string Name { get; set;}

    public void Soco()
    {
        Console.WriteLine($"{Name} deu um soco.");
    }

    public void Chute()
    {
        Console.WriteLine($"{Name} deu um chute.");
    }
}

public class Goku : Character
{

}

public class Vegeta : Character
{
    
}

public class Gohan : Character
{
    
}