
function detect(){


let news =
document.getElementById("news").value;



let fakeWords=[
"alien",
"rumor",
"fake",
"secret"
];



let result="REAL NEWS";



for(let word of fakeWords){


if(news.toLowerCase().includes(word)){


result="FAKE NEWS";

}

}



document.getElementById("result").innerHTML=result;


}
