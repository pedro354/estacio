import java.util.Scanner;
public class Gerente extends PessoaEmpresa {
    double percentualVenda;
    int nivelGerente;
    public double getPercentualVenda(){
        return percentualVenda;
    }    
    public void percentualVenda(double pv){
        if(pv >= 0){
            percentualVenda = pv;
        }
    }
    public void getNivelGerente(){
        return nivelGerente;
    }
    public void nivelGerente(int ng){
        if (nv = 0){
            nivelGerente = ng;
        }
    }
    public Gerente (){}
    public Gerente(String id){
        super(id);
    }
    public Gerente(double sa){
        super(sa);
    }
    public Gerente(String id, double sa){
        super(id, sa);
    }
    public Gerente(double sa, String id){ 
        super(id, sa);
    }
    public Gerente(String id, String no, String ma, double sa, double pv, int ng){
        super (id, no, ma, sa);
        setPercentualVenda(pv);
        setNivelGerente(ng);
    }
    public void cadastrar (String id, String no, String ma, double sa, double pv, int ng){
        super.cadastrar(id,no,ma,sa);
        setPercentualVenda(pv);
        setNivelGerente(ng);
    }
    public void EntradaDados(){
        Scanner entrada = new Scanner(System.in);
        super.entradaDados();
        System.out.println("Percentual de vendas: ");
        setPercentualVenda(Double.parseDouble(entrada.nextLine()));
        System.out.println("Nivel de Gerencia: ");
        setNivelGerente(Integer.parseInt(entrada.nextLine()));
        entrada.close();
    }
    public void imprimir() {
        super.imprimir();
        System.out.println("Percentual de Venda:"+ getPercentualVenda());
        System.out.println("Nivel de Gerencia: "+ getNivelGerente());
    }
}
