<h1 align="center">💧 Automatic Water Filling System 🚰</h1>



<p>The <strong>Automatic Water Filling System</strong> is designed to monitor and control the water level in a Tank/pot using an ultrasonic sensor (USS) and infrared (IR) sensors. The system activates a solenoid valve when the water level is low and deactivates it when the tank/pot reaches the desired level.</p>

<h2>📘 Project Description</h2>
<p>The system monitors the water level inside a container and ensures that it stays within a predefined range using sensors.</p>

<h2>⚙️ How It Works</h2>
<ul>
  <li>The ultrasonic sensor (USS) measures the distance between the sensor and the water surface to determine the current water level (X).</li>
  <li>Multiple infrared sensors (IR1 to IR10) detect the water level from different points and sum up their readings to get another water level measurement (Y).</li>
  <li>The difference between the expected (X) and detected (Y) water level is calculated as <strong>Z = X - Y</strong>.</li>
  <li>If <strong>X &gt; Z</strong> and <strong>Y ≠ 0</strong>, the solenoid valve activates to allow water flow.</li>
  <li>When the water level reaches the required height (<strong>X &lt; Z</strong>), the solenoid valve deactivates to stop water flow.</li>
</ul>

<h2>🛠️ Hardware Requirements</h2>
<ul>
  <li>Microcontroller (Arduino)</li>
  <li>Ultrasonic Sensor (HC-SR04 or equivalent)</li>
  <li>Infrared Sensors (10 IR sensors for level detection)</li>
  <li>Solenoid Valve</li>
  <li>Relay Module (for solenoid control)</li>
  <li>Power Supply (12V/5V depending on components)</li>
  <li>Water Tank or any pot</li>
</ul>

<h2>✨ Features</h2>
<ul>
  <li>Automatic water level detection</li>
  <li>Prevents water overflow</li>
  <li>Uses ultrasonic and infrared sensors for accuracy</li>
  <li>Energy-efficient control with solenoid valve</li>
</ul>
<hr>
<h3>👨‍💻 Author</h3>
<p>
 📬 Author: Jitendra Sharma 📧 Email: jitendrasharma7409@gmail.com 🔗 Follow for more: https://github.com/jitendrasharma-eng?tab=repositories | www.youtube.com/@ECodeLab-mv4jm | linkedin.com/in/jitendra-sharma-484072248 [https://www.linkedin.com/in/jitendra-sharma-484072248?lipi=urn%3Ali%3Apage%3Ad_flagship3_profile_view_base_contact_details%3BdRzhEpUKQSqQh6%2Fm6UayRw%3D%3D]
</p>
