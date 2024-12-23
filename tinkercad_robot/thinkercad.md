# Contrôler un robot avec Tinkercad (5 séances)

Cette série de séances vise à préparer les enfants à programmer un robot à deux moteurs capable de réaliser un trajet. L'objectif final est d'apprendre à contrôler les moteurs pour suivre un chemin prédéfini. Les concepts sont introduits progressivement en utilisant Tinkercad pour simuler le robot avant de travailler sur le matériel physique.

---

## **Séance 1 : Découverte des moteurs et contrôle de base**

### **Objectifs**
- Découvrir les moteurs DC et leur rôle dans un robot.
- Apprendre à connecter un moteur DC à une carte Arduino via un driver moteur L9110.

### **Activités**
1. **Présentation des composants**
   - Explication du rôle des moteurs DC et du driver moteur L9110.
   - Identification des connexions du module : pins A-IA, A-IB, B-IA, B-IB, alimentation.

2. **Connexion d’un moteur**
   - Connecter un moteur à un driver L9110 dans Tinkercad.

3. **Contrôle de base**
   - Programmer le moteur pour tourner dans un sens, puis dans l'autre.

4. **Ajustement de la vitesse**
   - Utiliser la commande PWM pour contrôler la vitesse du moteur.

---

## **Séance 2 : Contrôle de deux moteurs**

### **Objectifs**
- Apprendre à connecter et contrôler deux moteurs DC simultanément.
- Comprendre les bases du mouvement d’un robot (avancer, reculer, pivoter).

### **Activités**
1. **Connexion de deux moteurs**
   - Connecter deux moteurs à un driver L9110 et les configurer sur Tinkercad.

2. **Programmation des mouvements**
   - Écrire un programme pour :
     - Faire avancer le robot.
     - Faire reculer le robot.
     - Faire pivoter le robot à gauche et à droite.

3. **Quiz pratique**
   - Poser des questions sur les connexions et les commandes pour contrôler les moteurs.

---

## **Séance 3 : Introduction aux capteurs pour la navigation**

### **Objectifs**
- Découvrir l'utilisation des capteurs pour guider un robot.
- Ajouter un capteur de distance (ultrasonique).

### **Activités**
1. **Présentation du capteur ultrasonique**
   - Expliquer comment le capteur mesure les distances.
   - Connecter le capteur à la carte Arduino dans Tinkercad.

2. **Lecture des distances**
   - Programmer l’Arduino pour afficher les distances dans le moniteur série.

3. **Réagir aux obstacles**
   - Programmer le robot pour s’arrêter ou changer de direction lorsqu’un obstacle est détecté.

---

## **Séance 4 : Combinaison des moteurs et des capteurs**

### **Objectifs**
- Intégrer les moteurs et les capteurs pour une navigation autonome.
- Programmer un comportement simple pour éviter les obstacles.

### **Activités**
1. **Conception du programme**
   - Planifier les étapes pour que le robot avance et évite les obstacles.

2. **Programmation**
   - Écrire un programme combinant les lectures du capteur et le contrôle des moteurs.

3. **Tests en simulation**
   - Tester les réactions du robot dans Tinkercad et ajuster le programme en fonction des résultats.

---

## **Séance 5 : Projet final - Suivre un trajet**

### **Objectifs**
- Programmer le robot pour suivre un trajet défini.
- Utiliser les moteurs et capteurs pour naviguer efficacement.

### **Activités**
1. **Planification du trajet**
   - Dessiner un schéma du trajet à suivre.

2. **Programmation**
   - Écrire un programme complet pour que le robot suive le trajet.

3. **Tests et ajustements**
   - Tester le programme en simulation dans Tinkercad.
   - Corriger les erreurs et optimiser le comportement du robot.

4. **Présentation finale**
   - Les élèves montrent leur programme et expliquent les étapes suivies pour contrôler le robot.

---

## **Ressources supplémentaires**
- Tinkercad : [Tinkercad](https://www.tinkercad.com)
- Tutoriels Arduino : [Arduino Tutorials](https://www.arduino.cc/en/Tutorial/HomePage)
