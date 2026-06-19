import java.util.Scanner;


public class FakeNewsDetector {


    public static String checkNews(String news){


        String[] fakeWords={
            "alien",
            "secret",
            "rumor",
            "fake"
        };


        for(String word:fakeWords){

            if(news.toLowerCase().contains(word)){

                return "FAKE NEWS";

            }
        }


        return "REAL NEWS";

    }


    public static void main(String args[]){


        Scanner sc=new Scanner(System.in);


        System.out.println("Enter News:");

        String news=sc.nextLine();


        System.out.println(
            checkNews(news)
        );


        sc.close();

    }

}