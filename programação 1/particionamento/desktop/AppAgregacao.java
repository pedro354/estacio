package Desktop;

public class AppAgregacao {
    public static void main (String[] args) {
        Desktop desk = new Desktop();
        //para usar algum método do objeto criado a partir da classe agregada.
        //devemos usar o indentificador do objeto:
        //slot0
        desk.slot0.setMarca("Samsung");
        desk.slot0.setCapacidade(16);
        //slot1
        desk.slot1.setMarca("Kingston");
        desk.slot1.setCapacidade(8);
        //slot2
        desk.slot2.setMarca("Sandisk");
        desk.slot2.setCapacidade(4);
        //slot3
        desk.slot3.setMarca("Crucial");
        desk.slot3.setCapacidade(2);
        //total de memoria:
        System.out.println("Memoria total: "+ (desk.slot0.getCapacidade()+desk.slot1.getCapacidade()+desk.slot2.getCapacidade()+desk.slot3.getCapacidade()));
    }
}
