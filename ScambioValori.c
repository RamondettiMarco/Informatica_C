<?xml version="1.0"?>
<flowgorithm fileversion="2.11">
    <attributes>
        <attribute name="name" value=""/>
        <attribute name="authors" value="utente"/>
        <attribute name="about" value=""/>
        <attribute name="saved" value="2020-10-28 10:51:16 "/>
        <attribute name="created" value="dXRlbnRlO0RFU0tUT1AtUE5KODE2UjsyMDIwLTEwLTI4OyIxMDoyMzoxMiAiOzI4OTY="/>
        <attribute name="edited" value="dXRlbnRlO0RFU0tUT1AtUE5KODE2UjsyMDIwLTEwLTI4OyIxMDo1MToxNiAiOzE7MzAwOQ=="/>
    </attributes>
    <function name="Main" type="None" variable="">
        <parameters/>
        <body>
            <declare name="n1, n2, n1b, n2b" type="Real" array="False" size=""/>
            <output expression="&quot;inserisci un numero&quot;" newline="True"/>
            <input variable="n1"/>
            <output expression="&quot;inserisci un altro numero&quot;" newline="True"/>
            <input variable="n2"/>
            <assign variable="n1b" expression="0"/>
            <assign variable="n2b" expression="0"/>
            <assign variable="n1b" expression="n1"/>
            <assign variable="n2b" expression="n2"/>
            <assign variable="n1" expression="n2b"/>
            <assign variable="n2" expression="n1b"/>
            <output expression="&quot;il primo numero diventa&quot; &amp;n1" newline="True"/>
            <output expression="&quot;il secondo numero diventa&quot; &amp;n2" newline="True"/>
        </body>
    </function>
</flowgorithm>
