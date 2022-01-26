package Desktop;
import java.util.Scanner;
public class PlacaMae extends Identificacao{
    public String tipoProcessador;
    public PlacaMae(){}
    public PlacaMae(String ma, String mo){
        super(ma,mo);
    }
    public PlacaMae(String ma, String mo, String tp){
        super(ma,mo);
        setTipoProcessador(tp);
    }
    public PlacaMae(String ma, String mo, String tp, double pr){
        super(ma,mo, pr);
        setTipoProcessador(tp);
    }
    public String getTipoProcessador(){
        return tipoProcessador;
    }
    public void setTipoProcessador(String tp){
        if(!tp.isEmpty()){
            tipoProcessador = tp;
        }
    }
    public void cadastrar (String ma, String mo, double pr, String tp){
        super.cadastrar(ma,mo,pr);
        setTipoProcessador(tp);
    }
    public void imprimir() {
        super.imprimir();
        System.out.println("Processador: " + getTipoProcessador());
    }
    public void entradaDados(){
        Scanner entrada = new Scanner (System.in);
        super.entradaDados();
        System.out.println("Processador:");
        setTipoProcessador(entrada.nextLine());
        entrada.close();
    }
}
