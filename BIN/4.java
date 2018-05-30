import java.util.Random;
import java.util.Scanner;
public class calculate
{
    public static void calculate()
    {
        System.out.println("1.显示答案\t2.直接出下一题");
    }
    public static void main (String[] args)
    {
        System.out.println(" 请选择要随机生成的算法 ");
        System.out.println("\t1,加法题目\t2,减法题目\t3,乘法题目\t4,除法题目");
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
            System.out.println("输入有误，重新开始");
            main(null);
            break;
        }
        Scanner select =new Scanner(System.in);
        int se =select.nextInt();
        switch (se)
        {
        case 1:
            System.out.println("本题的结果："+result);
            main(null);
            break;
        case 2:
            main(null);
            break;
        default:
            System.out.println("输入有误，重新开始");
            main(null);
        }
    }
}