let images = ["https://abbasite.com/uploads/2018/04/story-image-abba-1024x662.jpg", "https://youth.europa.eu/sites/default/files/nnfe-people/8.jpg", "https://people.com/thmb/47fLRUa6Xnp5VOB2UDc14xqG5gc=/4000x0/filters:no_upscale():max_bytes(150000):strip_icc():focal(1014x389:1016x391):format(webp)/Adele-Pride-060224-03-8617463cbd8042209885c4de8dab4996.jpg" ]
let count = 0
function show(){
    document.getElementById("click").style.display = "block"
}

function change(){
    document.getElementById("abba").src = images[count]
    if(count === 2){
        count = 0
    }else{
        count += 1
    }
}
function show(){
    if(document.getElementById("click").style.display != "flex"){
        document.getElementById("click").style.display = "flex"
    document.getElementById("btn").innerHTML = "Show less"
    }else{
        document.getElementById("click").style.display = "none"
    document.getElementById("btn").innerHTML = "Show more"
    }
    
}