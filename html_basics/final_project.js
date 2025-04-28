function show(){
    if(document.getElementById("click").style.display != "block"){
        document.getElementById("click").style.display = "block"
        document.getElementById("btn").innerHTML = "Show less"
        
    }else{
        document.getElementById("click").style.display = "none"
        document.getElementById("btn").innerHTML = "Show more"
    }
    
}
function highlight(){
    document.getElementById("btn").style.backgroundColor = "rgb(201, 95, 83)"
    document.getElementById("btn").style.color = "white"
}
function normal(){
    document.getElementById("btn").style.backgroundColor = "gray"
    document.getElementById("btn").style.color = "black"
}
