package Desktop;
import java.util.Scanner;
public class Identificacao {
    public String marca, modelo;
    public double preco;
    public Identificacao (){}
    public Identificacao(String ma){
        setMarca(ma);
    }
    public Identificacao (double pr){
        setPreco(pr);
    }
    public Identificacao (String ma, String mo){
        setMarca(ma);
        setModelo(mo);
    }
    public Identificacao (String ma, double pr){
        setMarca(ma);
        setPreco(pr);
    }
    public Identificacao(String ma, String mo, double pr){
        setMarca(ma);
        setModelo(mo);
        setPreco(pr);
    }
    public String getMarca(){
        return marca;
    }
    public void setMarca(String ma){
        if(ma.isEmpty()){
            marca = ma;
        }
    }
    public String getModelo(){
        return modelo;
    }
    public void setModelo(String mo){
        if(mo.isEmpty()){
            modelo = mo;
        }
    }
    public double getPreco(){
        return preco;
    }
    public void setPreco(double pr){
        if(pr >= 0){
            preco = pr;
        }
    }
    public void cadastrar(String ma, String mo, double pr){
        setMarca(ma);
        setModelo(mo);
        setPreco(pr);
    }
    public void imprimir(){
        System.out.println("Marca: " + getMarca());
        System.out.println("Modelo: " + getModelo());
        System.out.println("Preço: " + getPreco());
    }
    public void entradaDados(){
        Scanner entrada = new Scanner (System.in);
        System.out.println("Marca:");
        setMarca(entrada.nextLine());
        System.out.println("Modelo:");
        setModelo(entrada.nextLine());
        System.out.println("Preço:");
        setPreco(Double.parseDouble(entrada.nextLine()));
        entrada.close();
    }
}
