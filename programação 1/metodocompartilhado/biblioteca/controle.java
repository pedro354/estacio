package biblioteca;
public interface controle {
    int POTENCIAMAXIMA = 350;
    int POTENCIAMINIMA = 120;
    public int getPotenciaMaxima();
    public int getPotenciaMinima();
    void assar(int potencia);
    void aquecer(int potencia);
    void desligar();
}
