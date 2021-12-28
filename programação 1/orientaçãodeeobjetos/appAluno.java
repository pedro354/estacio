package orientaçãodeeobjetos;

public class AppAluno {
    public static void main (String[] args){
        Aluno aluno1 = new Aluno();
        Aluno aluno2 = new Aluno();
        Aluno aluno3 = new Aluno();
        aluno1.matricula = "1001";
        aluno1.nome = "André";
        aluno1.cr = 6.7;
        aluno2.matricula = "1002";
        aluno2.nome = "Maria";
        aluno2.cr = 7.5;
        aluno3.matricula = "1003";
        aluno3.nome = "João";
        aluno3.cr = 7.0;
        aluno1.imprimir();
        aluno2.imprimir();
        aluno3.imprimir();
    
}
}

