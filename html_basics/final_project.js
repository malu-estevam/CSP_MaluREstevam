function show(){
    if(document.getElementById("click").style.display != "flex"){
        document.getElementById("click").style.display = "flex"
    document.getElementById("btn").innerHTML = "Show less"
    }else{
        document.getElementById("click").style.display = "none"
    document.getElementById("btn").innerHTML = "Show more"
    }
    
}