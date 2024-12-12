//.addeventlistner (event,function,useCapture)
//you can add many element handelers to one element
//Even the same event that invokes the different functions



/*
const i=document.getElementById("innerdiv");
  i.addEventListener("mouseover",changeRed);
  i.addEventListener("mouseout",changegreen);


  function changeRed()
  {
    i.style.backgroundColor="red";
  }
  function changegreen()
  {
    i.style.backgroundColor="green";
  }

*/

//===================================================================
const i=document.getElementById("innerdiv");
const o=document.getElementById("outerdiv");




  i.addEventListener("mouseover",changeBlue);
  o.addEventListener("mouseout",changeBlue,true);//this true element
  // force to executed outer element first

//generally inner element executed first
  function changeBlue()
  {
    alert('you handle ${this.id}');
    this.style.backgroundColor="lightblue";
  }
  

























