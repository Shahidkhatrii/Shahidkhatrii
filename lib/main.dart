import 'package:flutter/material.dart';

void main(){
runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      color: Colors.grey,
      title: "My App",
      home: Homepage(),
    );
  }
}

class Homepage extends StatefulWidget {
  const Homepage({Key? key}) : super(key: key);

  @override
  State<Homepage> createState() => _HomepageState();
}

class _HomepageState extends State<Homepage> {
  @override
  int count=0;
  void _changelongText(){
    setState(() {
        count=0;
    });
  }
  void _changeText() {
    setState(() {
      count++;
    });
  }
    Widget _bodyText(){
    return Container(
      color: Colors.white,
      padding: EdgeInsets.all(8.0),
      child: Center(
        child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Text("Counts",style: TextStyle(
                color: Colors.black87,
                fontSize: 40,
              ),),

              Text(count.toString(),style: TextStyle(
                 color: Colors.black87,
                 fontSize: 100,
              ),),
              Row(
                mainAxisAlignment: MainAxisAlignment.spaceAround,
                    children: [

                      RaisedButton(
                color: Colors.black,
                child: Text("ClCK ME",style: TextStyle(
                      color: Colors.white,
                ),),
                onPressed: _changeText ,
                //onLongPress: _changelongText,
              ),
                      RaisedButton(
                        color: Colors.black,
                        child: Text("RESET",style: TextStyle(
                          color:Colors.white,
                        ),),
                        onPressed: _changelongText,

                      ),
                    ],
                  ),

            ]
        ),
      ),
    );
    }

    Widget build(BuildContext context) {
    return Scaffold(
     appBar: AppBar(
       centerTitle: mounted,
       backgroundColor: Colors.cyanAccent,
       title: Text("CLICK IT!!!",style: TextStyle(
         color: Colors.black87,
         fontSize: 30,
       ),),
     ),
      body: _bodyText(),
    );
  }
}







