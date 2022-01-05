package metodoconst;

import java.util.Scanner;

public class Geometria {
    String forma;
    double baseMenor, baseMaior, altura;

    public void setForma(String f) {
        if (!f.isEmpty())
            ;
        {
            forma = f;
        }
    }

    public String getForma() {
        return forma;
    }

    public void setBaseMenor(double bm) {
        if (bm > 0) {
            baseMenor = bm;
        }
    }

    public double getBaseMenor() {
        return baseMenor;
    }

    public void setBaseMaior(double bm) {
        if (bm > 0) {
            baseMaior = bm;
        }
    }

    public double getBaseMaior() {
        return baseMaior;
    }

    /// *ENTRADA DE DADOS*///
    public void entradaDadosQuadrado() {
        Scanner entrada = new Scanner(System.in);
        System.out.println("Forma: ");
        setForma(entrada.nextLine());
        System.out.println("Lado: ");
        setBaseMenor(Double.parseDouble(entrada.nextLine()));
        entrada.close();

    }

    public void entradaDadosTrapezio() {
        Scanner entrada = new Scanner(System.in);
        System.out.println("Forma: ");
        setForma(entrada.nextLine());
        System.out.println("Lado: ");
        setBaseMenor(Double.parseDouble(entrada.nextLine()));
        entrada.close();

    }

    public void entradaDadosTriangulo() {
        Scanner entrada = new Scanner(System.in);
        System.out.println("Forma: ");
        setForma(entrada.nextLine());
        System.out.println("Lado: ");
        setBaseMenor(Double.parseDouble(entrada.nextLine()));
        entrada.close();

    }

    /*
     * {public void setAltura(double al) {
     * 
     * if (al > 0) {
     * altura = al;
     * }
     * }
     * 
     * public double getAltura() {
     * return altura;
     * }
     */

    public void imprimir() {
        System.out.println("Forma: " + getForma());
        System.out.println("Lado: " + getBaseMenor());
        System.out.println("Area: " + area(getBaseMenor()));
    }

    // criando os metodos area()
    // area do trapezio
    public double area(double bMaior, double bMenor, double alt) {
        double area;
        area = (bMaior + bMenor) * alt / 2;
        return area;
    }

    // aera do triangulo
    public double area(double bMenor, double alt) {
        double area;
        area = bMenor * alt;
        return area;
    }

    // area do quadrado
    public double area(double bMenor) {
        double area;
        area = bMenor * bMenor;
        return area;
    }

}
