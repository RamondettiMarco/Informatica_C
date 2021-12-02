<?xml version="1.0"?>
<flowgorithm fileversion="2.11">
    <attributes>
        <attribute name="name" value=""/>
        <attribute name="authors" value="utente"/>
        <attribute name="about" value=""/>
        <attribute name="saved" value="2020-11-18 10:10:10 "/>
        <attribute name="created" value="dXRlbnRlO0RFU0tUT1AtUE5KODE2UjsyMDIwLTExLTE4OyIxMDowMDo0MiAiOzI4OTQ="/>
        <attribute name="edited" value="dXRlbnRlO0RFU0tUT1AtUE5KODE2UjsyMDIwLTExLTE4OyIxMDoxMDoxMCAiOzE7Mjk5OA=="/>
    </attributes>
    <function name="Main" type="None" variable="">
        <parameters/>
        <body>
            <declare name="n, a, b, x, fib" type="Integer" array="False" size=""/>
            <output expression="&quot;inserisci la quantita di numeri&quot;" newline="True"/>
            <input variable="n"/>
            <if expression="n &gt; 0">
                <then>
                    <assign variable="a" expression="0"/>
                    <assign variable="b" expression="1"/>
                    <if expression="n==1">
                        <then>
                            <output expression="a" newline="True"/>
                        </then>
                        <else>
                            <if expression="n==2">
                                <then>
                                    <output expression="a" newline="True"/>
                                    <output expression="b" newline="True"/>
                                </then>
                                <else>
                                    <output expression="a" newline="True"/>
                                    <output expression="b" newline="True"/>
                                    <assign variable="fib" expression="0"/>
                                    <for variable="x" start="3" end="n" direction="inc" step="1">
                                        <assign variable="fib" expression="a+b"/>
                                        <output expression="fib" newline="True"/>
                                        <assign variable="a" expression="b"/>
                                        <assign variable="b" expression="fib"/>
                                    </for>
                                </else>
                            </if>
                        </else>
                    </if>
                </then>
                <else>
                    <output expression="&quot;errore&quot;" newline="True"/>
                </else>
            </if>
        </body>
    </function>
</flowgorithm>
