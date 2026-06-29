import javax.swing.*;
import java.awt.event.*;

public class addsub implements ActionListener {
    JFrame f;
    JLabel l1, l2, l3;
    JTextField t1, t2,t3;
    JButton b1 ,b2;

    public addsub() {
        f = new JFrame("calculate");
        l1 = new JLabel("num1");
        l2 = new JLabel("num2");
        l3 = new JLabel("result");
        t1 = new JTextField(25);
        t2 = new JTextField(25);
        t3 = new JTextField(25);
        b1 = new JButton("add");
        b2 = new JButton("sub");

        f.setSize(300, 300);
        f.setVisible(true);
        f.setDefaultCloseOperation(3);
        f.setLayout(null);

             l1.setBounds(20, 50, 100, 20);
            t1.setBounds(150,50, 100, 20); 

        l2.setBounds(20, 100, 100, 20); 
        t2.setBounds(150, 100, 100, 20); 

        b1.setBounds(50, 180, 80, 20);
          b2.setBounds(150, 180, 80, 20);
        
        l3.setBounds(20, 220, 100, 20);
        t3.setBounds(150,220,100,20);

        f.add(l1);
        f.add(t1);
        f.add(l2);
         f.add(t2);
         
        f.add(b1);
         f.add(b2);
         f.add(l3);
         f.add(t3);

        b1.addActionListener(this);
          b2.addActionListener(this);
    }

   
    public void actionPerformed(ActionEvent e) {
    double n1 = Double.parseDouble(t1.getText());
    double n2 = Double.parseDouble(t2.getText());
    
    double r = 0;
    if (e.getSource() == b1) {
        r = n1 + n2;
        l3.setText("sum"); 
    } else {
        r = n1 - n2;
        l3.setText("sub"); 
    }
    t3.setText(String.valueOf(r));
}

    public static void main(String[] args) {
        new addsub();
    }
}