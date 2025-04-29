let images = ["https://www.nps.gov/npgallery/GetAsset/3985E32C-1DD8-B71B-0BC98AEE806D3218/proxy/hires", "https://www.nps.gov/arch/planyourvisit/images/14001330199_c3c118e4c7_k.jpg" ]
let count = 0
function change(){
    document.getElementById("img2").src = images[count]
    if(count === 2){
        count = 0
    }else{
        count += 1
    }
}
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

