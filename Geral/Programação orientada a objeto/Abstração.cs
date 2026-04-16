public abstract class Shape
{
    public abstract double CalculateArea(); // Método abstrato
}

public class Circle : Shape
{
    public double Radius { get; set; }

    public override double CalculateArea()
    {
        return Math.PI * Radius * Radius;
    }
}

public class Rectangle : Shape 
{
    public double Width { get; set; }
    public double Height { get; set;}

    public override double CalculateArea()
    {
        return Width * Height;
    }
}