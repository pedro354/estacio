import java.util.Scanner;
public class Cliente extends Pessoa {
    String codigoCliente, telefone;
    int idade;
    public String getCodigoCliente(){
        return codigoCliente;
    }
    public void setCodigoCliente(String cc){
        if(!cc.isEmpty()){
            codigoCliente = cc;
        }
    }

    public String getTelefone(){
        return telefone;
    }
    public void setTelefone(String tf){
        if(!tf.isEmpty()){
            telefone = tf;
        }
    }
    public int getIdade(){
        return idade;
    }
    public void setIdade(int id){
        if(id>=0){
            idade=id;
        }
    }
    public Cliente (){}
    public Cliente(String id){
        super(id);
    }
    public Cliente (int id){
        setIdade(id);
    }
    public Cliente (String id, int ida){
        super(id);
        setIdade(ida);
    }
    public Cliente (String id, String no, String cc, String tf, int ida){
        super(id,no);
        setCodigoCliente(cc);
        setTelefone(tf);
        setIdade(ida);
    }
    public void cadastrar(String id, String no, String cc, String tf, int ida){
        super.cadastrar(id, no);
        setCodigoCliente(cc);
        setTelefone(tf);
        setIdade(ida);
    }
    public void entradaDados(){
        Scanner entrada = new Scanner(System.in);
        super.entradaDados();
        System.out.println("Código do cliente: ");
        setCodigoCliente(entrada.nextLine());
        System.out.println("Telefone: ");
        setTelefone(entrada.nextLine());
        System.out.println("Idade: ");
        setIdade(Integer.parseInt(entrada.nextLine()));
        entrada.close();
    }
    public void imprimir() {
        super.imprimir();
        System.out.println("Código do Cliente:"+getCodigoCliente());
        System.out.println("Telefone:"+getTelefone());
        System.out.println("Idade:"+getIdade());
    }

}
