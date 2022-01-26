package Desktop;

public class Memoria extends Armazenamento {
    public Memoria(){
        super();
    }
    public Memoria (String ti, int ca){
        setTipo(ti);
        setCapacidade(ca);
    }
    public Memoria(String ma, String mo){
        super(ma, mo);
    }
    public Memoria (String ma,double pr){
        super(ma, pr);
    }
    public Memoria (String ma, String mo, double pr){
        super(ma,mo,pr);
    }
    public Memoria (String ma, String mo, double pr, String ti, int ca){
        super(ma, mo, pr);
        setTipo(ti);
        setCapacidade(ca);
    }
}
