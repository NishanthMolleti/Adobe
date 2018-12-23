layout clipping_path
{
  view dialog(name:"Clipping path")
  {
    column(child_horizontal:align_file)
    {
      pop(name:"Path",bind:@path,items:
      [
        {name:"None",value:empty},
        {name:"Path 1",value:1},
        {name:"Path 2",value:2}//no comma
      ]);
      edit_number(name:"Flatness:",digits:9,bind:@flatness);//C++
    }
    button(name:"OK",default:true,bind:@result);
  }//bind:@random is important,same,easy.
}
