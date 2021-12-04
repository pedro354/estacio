package segundaaula;

import java.util.Scanner;
public class exemplo {

    public static void main(String[]args){
        
        Scanner sc = new
        Scanner(System.in);
        double soma, nota1, nota2;
        System.out.println("Digite a nota 1: ");
        nota1 =
        Double.parseDouble(sc.nextLine());
        System.out.println("Digite a nota 2: ");
        nota2 =
        Double.parseDouble(sc.nextLine());
        soma = nota1 + nota2
        ;
        System.out.println("A sua média é: " + soma);
        sc.close();
    }

    public exemplo() {
    }
}
