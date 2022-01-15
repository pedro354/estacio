import java.util.Scanner;

public class PessoaEmpresa extends Pessoa {
    String matricula;
    Double salario;
    public String getMatricula(){
        return matricula;
    }
    public void setMatricula(String ma){
        if (!ma.isEmpty()){
            matricula = ma;
        }
    }
    public double getSalario(){
        return salario;
    }
    public void setSalario(double sa){
        if (sa >= 0){
            salario = sa;
        }
    }
    PessoaEmpresa(){}
    public PessoaEmpresa (String id){
        super(id);
    }
    public PessoaEmpresa (double sa){
        setSalario(sa);
    }
    public PessoaEmpresa (String id, double sa){
        super(id);
        setSalario(sa);
    }
    public PessoaEmpresa (String id, Double no, String ma, double sa){
        super(id,no);
        setMatricula(ma);
        setSalario(sa);
    }
    public void cadastrar(String id, String no, String ma, double sa){
        super.cadastrar(id, no);
        setMatricula(ma);
        setSalario(sa);
    }
    public void entradaDados(){
        Scanner entrada = new Scanner(System.in);
        super.entradaDados();
        System.out.println("Matricula: ");
        setMatricula(entrada.nextLine());
        System.out.println("Salario: ");
        setSalario(Double.parseDouble(entrada.nextLine()));
        entrada.close();
    }
    public void imprimir(){
        super.imprimir();
        System.out.println("Matricula: "+ getMatricula());
        System.out.println("Salario: "+getSalario());
    }
}
