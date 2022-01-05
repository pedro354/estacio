package metodoconst;

public class AppGeometria {
    public static void main (String[] args) {
        Geometria q1 = new Geometria();
        q1.entradaDadosQuadrado();
        q1.imprimir();
        Geometria t1 = new Geometria();
        t1.entradaDadosTrapezio();
        t1.imprimir();
        Geometria tr1 = new Geometria();
        tr1.entradaDadosTriangulo();
        tr1.imprimir();
    }
}
