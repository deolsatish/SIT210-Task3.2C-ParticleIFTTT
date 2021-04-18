int LightSensor = A0;

void setup() {
    pinMode(LightSensor,INPUT);

}

void loop() {
    //int lightlevel=analogRead(LightSensor); if using real light sensor , use this code
    int lightlevel= random(-2,2); // Do not have light sensor creating random variable
    if(lightlevel <1) Particle.publish("Light","Light",PRIVATE);
    if(lightlevel >=1) Particle.publish("Light","No_Light",PRIVATE);
    delay(10000);

}