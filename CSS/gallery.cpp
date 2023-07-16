body .healthCamp{
    font-family: 'Homemade Apple', cursive;
    font-size:20px;
   background:url('https://images.pexels.com/photos/172277/pexels-photo-172277.jpeg?auto=compress&cs=tinysrgb&dpr=2&h=750&w=1260');
  background-size:cover;
  background-repeat:repeat;
  color:#000;
}

.healthCamp ul{
  position:absolute;
  margin:0;
  padding:0;
}

.healthCamp li{
  text-align:center;
  display:inline-block;
  list-style:none;
  position:relative;
  border:solid 12px #fff;
  background:#fff;
  box-shadow:0 0 15px 0px #555;
  transition:all 1s ease;
  -o-transition:all 1s ease;
  -moz-transition:all 1s ease;
  -webkit-transition:all 1s ease;
  top:50px;
}


.healthCamp li:hover{
  top:0px;
  opacity:0.5;
}

.healthCamp li:nth-child(1){
    transform:rotate(10deg);
}

.healthCamp li:nth-child(2){
    transform:rotate(0deg);
}

.healthCamp li:nth-child(3){
    transform:rotate(-10deg);
}

.healthCamp li:nth-child(4){
    transform:rotate(20deg);
}

.healthCamp p{
  margin:-15px 0 0 0;
}

.light{
  border-radius:50%;
  position:absolute;
  left:0;
  right:0;
  width:700px;
  height:700px;
  background:#fff;
  filter:blur(100px);
  opacity:0.3;
  pointer-events:none;
}
