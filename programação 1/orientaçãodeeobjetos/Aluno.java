package orientaçãodeeobjetos;

public class Aluno {
    String matricula, nome;
    double cr;

    public void setMatricula(String m){
        if(!m.isEmpty()){
            matricula = m;
        }
    }
    public String getMatricula(){
        return matricula;

    }
    public void setNome(String n){
        if(!n.isEmpty()){
            nome = n;
        }
    }
    public String getNome(){
        return nome;
    }
    public void setCr(double c){
        if (c >= 0 && c <=10){
            cr = c;
        }
    }
    public double getCr(){
        return cr;
    }

    public void imprimir( ){
        System.out.println("Matricula: " + getMatricula());
        System.out.println("Nome: " + getNome());
        System.out.println("CR: " + getCr());
    }
}

