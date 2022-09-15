import 'package:flutter/material.dart';

void main(){
runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
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
  String Mytext="Hello World";
  void _changelongText(){
    setState(() {
      if(Mytext.startsWith('H')) {
        Mytext = "You have long pressed it";
      }else{
        Mytext="You have long pressed it";
      }
    });
  }
  void _changeText() {
    setState(() {
      if (Mytext.startsWith('H')) {
        Mytext = "Welcome to my world";
      } else {
        Mytext = "Hello World";
      }
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
              Text(Mytext),
              RaisedButton(
                color: Colors.red,
                child: Text("ClCK ME"),
                onPressed: _changeText ,
                onLongPress: _changelongText,
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
       backgroundColor: Colors.deepOrange,
       title: Text("Home Page",style: TextStyle(
         color: Colors.teal,
         fontSize: 34,
       ),),
     ),
      body: _bodyText(),
    );
  }
}







