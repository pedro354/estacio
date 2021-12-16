package massacorporal;

import java.util.Scanner;

public class massacorporal {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        double peso,alt, imc;
        System.out.print("Peso...: ");
        peso = Double.parseDouble(sc.nextLine());
        System.out.print("Altura...: ");
        alt = Double.parseDouble(sc.nextLine());
        imc = peso / (alt * alt);
        System.out.println("IMC...: " + imc);
        sc.close();

        //analisando o resultado do imc

        if (imc < 10.5)
        {
            System.out.println("------Abaixo do peso");
        }
        else if (imc < 25)
        {
            System.out.println("------Peso Normal-----");
        }
        else if (imc < 30 )
        {
            System.out.println("Sobrepeso");
        }
        else if (imc < 35)
        {
            System.out.println("Obesidade Grau 1");
        }
        else if (imc<40)
        {
            System.out.println("Obesidade Grau 2");
        }
        else {
            System.out.println("Obesidade Grau 3");
        }
    }
    
}
