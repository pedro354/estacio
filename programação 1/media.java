import java.util.Scanner;

public class media {
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        double media, nota1, nota2;
        System.out.println("Digite a nota 1: ");
        nota1 = Double.parseDouble(sc.nextLine());
        System.out.println("Digite a nota 2: ");
        nota2 = Double.parseDouble(sc.nextLine());
        media = (nota1 + nota2) / 2.0;
        System.out.println("A sua média é:" + media);
        sc.close();
    }
}