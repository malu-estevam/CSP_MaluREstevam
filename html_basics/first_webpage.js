let images = ["https://abbasite.com/uploads/2018/04/story-image-abba-1024x662.jpg", "https://youth.europa.eu/sites/default/files/nnfe-people/8.jpg" ]
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