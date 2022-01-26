package Desktop;

public class HD extends Armazenamento{
    public HD (){
        super();
    }
    public HD(String ti, int ca){
        setTipo(ti);
        setCapacidade(ca);
    }
    public HD (String ma, String mo){
        super(ma, mo);
    }
    public HD (String ma, double pr){
        super(ma, pr);
    }
    public HD(String ma, String mo, double pr){
        super(ma,mo,pr);
    }
    public HD (String ma, String mo, double pr, String ti, int ca){
        super(ma, mo, pr);
        setTipo(ti);
        setCapacidade(ca);
    }
}
