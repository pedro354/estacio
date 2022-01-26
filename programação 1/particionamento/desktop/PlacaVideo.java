package Desktop;
import java.util.Scanner;
public class PlacaVideo extends Identificacao{
    public String padrao;
    public PlacaVideo () {}
    public PlacaVideo(String ma, String mo){
        super (ma, mo);
    }
    public PlacaVideo (String ma, String mo, double pr){
        super(ma, mo, pr);
    }
    public PlacaVideo(String ma, String mo, double pr, String pa){
        super(ma,mo,pr);
        setPadrao(pa);
    }
    public String getPadrao(){
        return padrao;
    }
    public void setPadrao(String pa){
        if(!pa.isEmpty()){
            padrao = pa;
        }
    }
    public void cadastrar (String ma, String mo, double pr, String pa){
        super.cadastrar(ma, mo, pr);
        setPadrao(pa);
    }
    public void imprimir() {
        super.imprimir();
        System.out.println("Padrão:" +getPadrao());
    }
    public void entradaDados(){
        Scanner entrada = new Scanner (System.in);
        super.entradaDados();
        System.out.println("Padrão: ");
        setPadrao(entrada.nextLine());
        entrada.close();
    }
}
