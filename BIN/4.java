import java.util.Random;
import java.util.Scanner;
public class calculate
{
    public static void calculate()
    {
        System.out.println("1.��ʾ��\t2.ֱ�ӳ���һ��");
    }
    public static void main (String[] args)
    {
        System.out.println(" ��ѡ��Ҫ������ɵ��㷨 ");
        System.out.println("\t1,�ӷ���Ŀ\t2,������Ŀ\t3,�˷���Ŀ\t4,������Ŀ");
        System.out.println("\n");
        Scanner sc=new Scanner(System.in);
        int s = sc.nextInt();
        double result=0;
        Random r = new Random();
        int a = r.nextInt(100);
        int b =r.nextInt(100);
        switch(s)
        {
        case 1:
            System.out.println("-----|"+a+"+"+b+"=?|-----");
            result =a+b;
            calculate();
            break;
        case 2:
            System.out.println("-----|"+a+"-"+b+"=?|-----");
            result =a-b;
            calculate();
            break;
        case 3:
            System.out.println("-----|"+a+"*"+b+"=?|-----");
            result =a*b;
            calculate();
            break;
        case 4:
            System.out.println("-----|"+a+"/"+b+"=?|-----");
            {
                float c=a;
                float d=b;
                result=c/d;
            }
            calculate();
            break;
        default:
            System.out.println("�����������¿�ʼ");
            main(null);
            break;
        }
        Scanner select =new Scanner(System.in);
        int se =select.nextInt();
        switch (se)
        {
        case 1:
            System.out.println("����Ľ����"+result);
            main(null);
            break;
        case 2:
            main(null);
            break;
        default:
            System.out.println("�����������¿�ʼ");
            main(null);
        }
    }
}