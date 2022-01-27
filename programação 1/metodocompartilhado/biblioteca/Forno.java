package biblioteca;
import java.util.Scanner;
public class Forno implements controle {
    private String marca,modelo;
    private int volume, potencia;
    public String getMarca(){
        return marca;
    }
    public void setMarca(String marca){
        this.marca = marca;
    }
    public String getModelo(){
        return modelo;
    }
    public void setModelo(String modelo){
        this.modelo = modelo;
    }
    public int getVolume(){
        return volume;
    }
    public void setVolume(int volume){
        this.volume = volume;
    }
    public int getPotencia(){
        return potencia;
    }
    public void setPotencia(int potencia){
        this.potencia = potencia;
    }
    public Forno(String string, String string2, int i, int j){}
    public Forno(String marca, String modelo){
        this.marca = marca;
        this.modelo = modelo;
    }
    public Forno (int volume, int potencia){
        this.volume = volume;
        this.potencia = potencia;
    }
    public void cadastrar(String marca, String modelo, int volume, int potencia){
        this.marca = marca;
        this.modelo = modelo;
        this.volume = volume;
        this.potencia = potencia;
    }
    public void imprimir() {
        System.out.println("Marca: "+ getMarca());
        System.out.println("Modelo: "+ getModelo());
        System.out.println("Volume: "+ getVolume());
        System.out.println("Potencia: "+ getPotencia());
    }
    public void entrada(){
        Scanner ent = new Scanner(System.in);
        System.out.println("Marca:");
        setMarca(ent.nextLine());
        System.out.println("Modelo:");
        setModelo(ent.nextLine());
        System.out.println("Volume:");
        setVolume(Integer.parseInt(ent.nextLine()));
        System.out.println("Potencia:");
        setPotencia(Integer.parseInt(ent.nextLine()));
        ent.close();
    }
    public int getPotenciaMaxima(){
        return POTENCIAMAXIMA;
    }
    public int getPotenciaMinima(){
        return POTENCIAMINIMA;
    }
    public void assar(int potencia){
        setPotencia(potencia);
        System.out.println("Forno assando com potencia= " + getPotencia());
    }
    public void aquecer (int potencia){
        setPotencia(potencia);
        System.out.println("Forno aquecendo com potencia= " + getPotencia());
    }
    public void desligar(){
        System.out.println("Desligar Forno");
    }
}
