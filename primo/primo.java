package primo;
import java.util.Scanner;

public class primo {
    
    public static void main(String[] args){
        Scanner sc = new Scanner (System.in);
        int nr, i, cont=0;
        System.out.print("NUmero..: ");
        nr = Integer.parseInt(sc.nextLine());
        for (i = 1; i<= nr; i++){
            if (nr % i == 0) {
                cont++;
            }
    }
    if (cont == 2) {
        System.out.println("o numero é primo");
    }
    else 
        { System.out.println("o numero não é primo");
    }

}}
