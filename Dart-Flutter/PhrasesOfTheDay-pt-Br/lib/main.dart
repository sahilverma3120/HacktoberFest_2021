import 'dart:math';

import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';

void main(){
  runApp(MaterialApp(
    debugShowCheckedModeBanner: false,
    home: HomeFull(),
  )
  );

}

class HomeFull extends StatefulWidget{
  @override
  _HomeState createState() => _HomeState();
}

class _HomeState extends State<HomeFull> {
  @override
    var _frases =[
      "Sou apenas um pequeno planeta...",
      "Sou o planeta...",
      "Ele é o planeta",
      "Nos somos o planeta",
    ];

    var _frasesGeradas = "Clique abaixo para gerar uma frasese";

    void _gerarFrases(){
      var numerosorteado = Random().nextInt(_frases.length);
      setState(() {
        _frasesGeradas = _frases[numerosorteado];
      });
    }
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          title: Text("Instagram"),
          backgroundColor: Colors.purple,
        ),
        body: Container(
          padding: EdgeInsets.all(16),
          width: double.infinity,
          decoration: BoxDecoration(
              border: Border.all(width: 3, color: Colors.amber)
          ),
          child: Column(
              mainAxisAlignment: MainAxisAlignment.spaceEvenly,
              crossAxisAlignment: CrossAxisAlignment.center,
              children: <Widget>[
                Image.asset("imagens/logo.png"),
                Text(
                  _frasesGeradas,
                  textAlign: TextAlign.justify,
                  style: TextStyle(
                      fontSize: 30,
                      fontStyle: FontStyle.italic,
                      color: Colors.black
                  ),
                ),
                RaisedButton(
                  child: Text(
                    "Nova Frase",
                    style: TextStyle(
                      fontSize: 15,
                      color: Colors.white,
                    ),
                  ),
                  color: Colors.green,
                  onPressed: _gerarFrases,

                )
              ]
          ),
        ),
        bottomNavigationBar: BottomAppBar(
          color: Colors.green,
          child: Padding(
            padding: EdgeInsets.all(16),
            child: Row(
              children: <Widget>[
                Text("Fotos"),
                Text("Publicar"),
                Text("Perfil"),
              ],
            ),
          ),
        )
    );
  }
}