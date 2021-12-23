package primo;
import java.util.Scanner;
public class primo {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
    int nr, i, cont = 0;
        System.out.print("Numero..: ");
        nr = Integer.parseInt(sc.nextLine());
        for (i=1; i<= nr; i++){
            if (nr % i == 0) {
                cont++;
            }sc.close();
        }
    if (cont == 2){
        System.out.println("O numero é PRIMO");
    } else {
        System.out.println("O numero não é PRIMO");
    }
    
}

}