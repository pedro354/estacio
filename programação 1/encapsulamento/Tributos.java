public class Tributos {
    double imposto;

    public double calcularImposto(double preco, int tipoProduto){
        if(tipoProduto<10){
            imposto = calcularTipoProduto0(preco, tipoProduto);
        }
        else {
            if (tipoProduto < 20) {
                //tipo 1 
                imposto = calcularTipoProduto1 (preco, tipoProduto - 10);
            }else {
                //tipo 2
                imposto = calcularTipoProduto2 (preco, tipoProduto - 20);
            }
        }
        return imposto;
}
public double calcularTipoProduto0(double valor, int faixa){
    if(faixa == 0){
        imposto = valor * 4.5 / 100;
    }
    else{
        if(faixa==1){
            imposto = valor *5.5 / 100;
        }
        else{
            imposto = valor * 4.5 / 100;
        }
    }
    return imposto;
}

public double calcularTipoProduto1(double valor, int faixa){
    if(faixa== 0){
        imposto = valor * 12.5 / 100; 
    }else{ if(faixa==1){
        imposto = valor * 12.8 / 100;
    }else{ 
        imposto = valor * 13.1 / 100;
    }
}
return imposto;
}
public double calcularTipoProduto2(double valor, int faixa){
    if(faixa == 0){
        imposto = valor * 25.8 / 100;
    }else{
        if(faixa == 1){
            imposto = valor * 26.3 / 100;
        }else{
            imposto = valor * 28.1 / 100;
        }
    }
    return imposto;
    }
}  