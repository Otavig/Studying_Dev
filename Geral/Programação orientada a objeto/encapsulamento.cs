public class BankAccount
{
    private decimal balance; // Dado protegido

    public decimal GetBalance();
    {
        return balance; // Permite acesso ao valor
    }   

    public void Deposit(decimal amount)
    {
        if (amount > 0) {
            balance += amount; // atualiza o saldo de forma controlada
        } 
    }

    public void Withdraw(decimal amount) 
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount; // Deduz o valor do saldo, respeitando limites
        }
    }
}

BankAccount account = new BankAccount();