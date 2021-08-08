
// code is written by krishna
import java.applet.*;
import java.awt.*;
import javax.swing.*;

public class AppletDemo extends Applet {
    public void paint(Graphics g) {
        g.drawLine(20, 20, 500, 20);
        g.drawRect(20, 40, 200, 40);
        g.fillRect(300, 40, 200, 40);
        g.drawRoundRect(20, 100, 200, 40, 10, 10);
        g.fillRoundRect(300, 100, 200, 40, 10, 10);
        g.setColor(Color.RED);
        g.drawOval(20, 160, 200, 100);
        g.fillOval(300, 160, 200, 100);
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame();
        AppletDemo Gfx = new AppletDemo();
        frame.getContentPane().add(Gfx, BorderLayout.CENTER);
        frame.setSize(new Dimension(550, 550));
        frame.setVisible(true);
    }
}

/*
 * <applet code="AppletDemo" border="1"> </applet>
 */