package orientaçãodeeobjetos;

import java.util.Scanner;

public class Celular {
    String marca, modelo, processador, cartaoMemoria;
    int peso, memoriaRam, armarInterno;
    double tamanhoTela;

    public void setMarca(String mar) {
        marca = mar;
    }

    public String getMarca() {
        return marca;
    }

    public void setModelo(String m) {
        modelo = m;
    }

    public String getModelo() {
        return modelo;
    }

    public void setProcessador(String pro) {
        processador = pro;
    }

    public String getProcessador() {
        return processador;
    }

    public void setCartaoMemoria(String cm) {
        cartaoMemoria = cm;
    }

    public String getCartaoMemoria() {
        return cartaoMemoria;
    }

    public int getPeso() {
        return peso;
    }

    public void setPeso(int p) {
        if (p > 0) {
            peso = p;
        }
    }

    public int getMemoriaRam() {
        return memoriaRam;
    }

    public void setMemoriaRam(int ram) {
        if (ram > 0) {
            memoriaRam = ram;
        }
    }

    public int getArmarInterno() {
        return armarInterno;
    }

    public void setArmarInterno(int ar) {
        if (ar > 0) {
            armarInterno = ar;
        }
    }

    public double getTamanhoTela() {
        return tamanhoTela;
    }

    public void setTamanhoTela(double tt) {
        if (tt > 0) {
            tamanhoTela = tt;

        }
    }

    // Entrada de entradaDados
    public void entradaDados(){
            Scanner entrada = new Scanner(System.in);
            System.out.println("Digite Marca do Celular: ");
            setMarca(entrada.nextLine());

            System.out.println("Digite Modelo do Celular: ");
            setModelo(entrada.nextLine());
            
            System.out.println("Digite Processador do Celular: ");
            setProcessador(entrada.nextLine());

            System.out.println("Digite Cartao de Memoria do Celular do Celular: ");
            setCartaoMemoria(entrada.nextLine());
            
            System.out.println("Digite o Peso do Celular: ");
            setPeso (Integer.parseInt(entrada.nextLine()));

            System.out.println("Digite a Memoria Ram do Celular: ");
            setMemoriaRam (Integer.parseInt(entrada.nextLine()));
            
            System.out.println("Digite o Armarzenamento Interno do Celular: " );
            setArmarInterno (Integer.parseInt(entrada.nextLine()));
            
            System.out.println("Digite o Tamanho da Tela do Celular: ");
            setTamanhoTela (Double.parseDouble(entrada.nextLine()));
    
        }

    public void imprimir() {
        System.out.println("Marca: " + getMarca());
        System.out.println("Modelo: " + getModelo());
        System.out.println("Processador: " + getProcessador());
        System.out.println("Cartao de Memoria: " + getCartaoMemoria());
        System.out.println("Peso: " + getPeso());
        System.out.println("Memoria Ram: " + getMemoriaRam());
        System.out.println("Armarzenamento Interno: " + getArmarInterno());
        System.out.println("Tamanho Tela: " + getTamanhoTela());
        
    }
}
