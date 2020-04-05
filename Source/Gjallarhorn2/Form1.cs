using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Gjallarhorn2
{

    //Primary class.
    public partial class Form1 : Form
    {
        Converter conv = new Converter();

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        //Conversion button click function. 
        //When clicked this function decides which translation algorithm to run on the input.
        private void convButton_Click(object sender, EventArgs e)
        {
            string inp = inputTB.Text;

            if (directionControl.Text == "Letters --> Runes")
            {
                if (alphabetControl.Text == "Elder Futhark")
                {
                    outputTB.Text = conv.LetToEF(inp, aproxBrackets.Checked, oddLetters.Checked, spacesColons.Checked);
                }
                else if (alphabetControl.Text == "Younger Futhark")
                {
                    outputTB.Text = conv.LetToYF(inp, aproxBrackets.Checked, oddLetters.Checked, spacesColons.Checked);
                }
                else if (alphabetControl.Text == "Anglo Saxon")
                {
                    outputTB.Text = conv.LetToAS(inp, aproxBrackets.Checked, oddLetters.Checked, spacesColons.Checked);
                }
                else if (alphabetControl.Text == "Medieval")
                {
                    outputTB.Text = conv.LetToMD(inp, aproxBrackets.Checked, oddLetters.Checked, spacesColons.Checked);
                }
                else
                {
                    outputTB.Text = "No runic alphabet selected!";
                }
            }
            else if (directionControl.Text == "Runes --> Letters")
            {
                if (alphabetControl.Text == "Elder Futhark")
                {
                    outputTB.Text = conv.EFtoLet(inp, aproxBrackets.Checked, oddLetters.Checked, spacesColons.Checked);
                }
                else if (alphabetControl.Text == "Younger Futhark")
                {
                    outputTB.Text = conv.YFtoLet(inp, aproxBrackets.Checked, oddLetters.Checked, spacesColons.Checked);
                }
                else if (alphabetControl.Text == "Anglo Saxon")
                {
                    outputTB.Text = conv.AStoLet(inp, aproxBrackets.Checked, oddLetters.Checked, spacesColons.Checked);
                }
                else if (alphabetControl.Text == "Medieval")
                {
                    outputTB.Text = conv.MDtoLet(inp, aproxBrackets.Checked, oddLetters.Checked, spacesColons.Checked);
                }
                else
                {
                    outputTB.Text = "No runic alphabet selected!";
                }
            }
            else
            {
                outputTB.Text = "No translation direction selected!";
            }
        }

        private void settingsTab_Click(object sender, EventArgs e)
        {
            tabControl1.SelectTab(1);
        }

        private void backbutton_Click(object sender, EventArgs e)
        {
            tabControl1.SelectTab(0);
        }

        private void cleartext_Click(object sender, EventArgs e)
        {
            inputTB.Text = "";
            outputTB.Text = "";
        }

        private void toKeyboard_Click(object sender, EventArgs e)
        {
            tabControl1.SelectTab(2);
        }

        private void button75_Click(object sender, EventArgs e)
        {
            //This is the back button for the rune keyboard tab. Idk why it's named like this.

            tabControl1.SelectTab(0);
        }


        private void keyboardClear_Click(object sender, EventArgs e)
        {
            keyboardTB.Text = "";
        }


        //Click functions for rune keyboard input.
        //*L o n g*   regions.

        #region EF_Keyboard

        private void button1_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚠ";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚢ";
        }

        private void button4_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚦ";
        }

        private void button6_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚨ";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚱ";
        }

        private void button5_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚲ";
        }

        private void button7_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚷ";
        }

        private void button9_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚹ";
        }

        private void button10_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚺ";
        }

        private void button8_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚾ";
        }

        private void button11_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛁ";
        }

        private void button13_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛃ";
        }

        private void button21_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛈ";
        }

        private void button20_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛇ";
        }

        private void button23_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛉ";
        }

        private void button22_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛊ";
        }

        private void button24_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛏ";
        }

        private void button19_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛒ";
        }

        private void button18_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛖ";
        }

        private void button16_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛗ";
        }

        private void button17_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛚ";
        }

        private void button15_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛜ";
        }

        private void button14_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛞ";
        }

        private void button12_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛟ";
        }


        #endregion

        #region YF_Keyboard

        private void button44_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚠ";
        }

        private void button43_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚢ";
        }

        private void button41_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚦ";
        }

        private void button39_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚬ";
        }

        private void button42_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚱ";
        }

        private void button40_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚴ";
        }

        private void button38_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚼ";
        }

        private void button36_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚾ";
        }

        private void button35_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛁ";
        }

        private void button37_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛅ";
        }

        private void button28_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛦ";
        }

        private void button29_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛋ";
        }

        private void button26_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛏ";
        }

        private void button27_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛒ";
        }

        private void button25_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛘ";

        }

        private void button30_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛚ";
        }



        #endregion

        #region AS_Keyboard

        private void button68_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚠ";
        }

        private void button67_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚢ";
        }

        private void button65_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚦ";
        }

        private void button63_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚩ";
        }

        private void button66_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚱ";
        }

        private void button64_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚳ";
        }

        private void button62_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚷ";
        }

        private void button60_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚹ";
        }

        private void button59_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚻ";
        }

        private void button61_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚾ";
        }

        private void button58_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛁ";
        }

        private void button56_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛡ";
        }

        private void button74_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛄ";
        }

        private void button73_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛇ";
        }

        private void button71_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛈ";
        }

        private void button48_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛉ";
        }

        private void button49_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛋ";
        }

        private void button46_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚴ";
        }

        private void button47_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛏ";
        }

        private void button45_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛒ";
        }

        private void button50_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛖ";
        }

        private void button51_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛗ";
        }

        private void button53_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛚ";
        }

        private void button52_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛝ";
        }

        private void button54_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛟ";
        }

        private void button55_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛞ";
        }

        private void button57_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚪ";
        }

        private void button69_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚫ";
        }

        private void button70_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚣ";
        }

        private void button72_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛠ";
        }

        #endregion

        #region MD_Keyboard

        private void button31_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛆ";
        }

        private void button32_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛒ";
        }

        private void button33_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛍ";
        }

        private void button34_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛑ";
        }

        private void button76_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚦ";
        }

        private void button77_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚧ";
        }

        private void button78_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛂ";
        }

        private void button79_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚠ";
        }

        private void button80_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚵ";
        }

        private void button81_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚼ";
        }

        private void button82_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛁ";
        }

        private void button83_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚴ";
        }

        private void button84_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛚ";
        }

        private void button85_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛘ";
        }

        private void button86_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚿ";
        }

        private void button87_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚮ";
        }

        private void button88_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛔ";
        }

        private void button90_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚱ";
        }

        private void button91_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛋ";
        }

        private void button92_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛐ";
        }

        private void button93_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚢ";
        }

        private void button94_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚡ";
        }

        private void button95_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚥ";
        }

        private void button96_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛪ";
        }

        private void button97_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛦ";
        }

        private void button98_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚤ";
        }

        private void button99_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᛅ";
        }

        private void button89_Click(object sender, EventArgs e)
        {
            keyboardTB.Text += "ᚯ";
        }

        #endregion

    }

    //Converter class.
    //Stores all of the conversion functions on one convienient class.
    //You can tell what a function translates for by looking at its name.
    public class Converter
    {
        //This function is a bit special.
        //I had to make this because the toLower(); method didn't make special characters lowercase.
        public static string special_tolower(string input)
        {
            input = input.ToLower();
            input = input.Replace("Þ", "þ");
            input = input.Replace("Ŋ", "ŋ");
            input = input.Replace("Ï", "ï");
            input = input.Replace("Ø", "ø");
            input = input.Replace("Ð", "ð");
            input = input.Replace("Ą", "ą");
            input = input.Replace("Æ", "æ");
            input = input.Replace("Œ", "œ");
            input = input.Replace("Ʀ", "ʀ");
            input = input.Replace("ʒ", "ɛ");
            input = input.Replace("Ä", "ä");
            input = input.Replace("Ö", "ö");

            return input;
        }
        //
        
        public string LetToEF(string input, bool rembrackets, bool oddlets, bool spacecolon)
        {
            //Init:
            input = special_tolower(input);
            input = input.Replace("th", "þ");
            input = input.Replace("ng", "ŋ");

            //Aproximated Translations:
            if (!rembrackets)
            {
                input = input.Replace("ck", "[ᚲ]");
                input = input.Replace("c", "[ᚲ]");
                input = input.Replace("qu", "[ᚲᚢ]");
                input = input.Replace("q", "[ᚲᚢ]");
                input = input.Replace("v", "[ᚠ]");
                input = input.Replace("x", "[ᚲᛊ]");
                input = input.Replace("y", "[ᛃ]");
            }
            else
            {
                input = input.Replace("ck", "ᚲ");
                input = input.Replace("c", "ᚲ");
                input = input.Replace("qu", "ᚲᚢ");
                input = input.Replace("q", "ᚲᚢ");
                input = input.Replace("v", "ᚠ");
                input = input.Replace("x", "ᚲᛊ");
                input = input.Replace("y", "ᛃ");
            }
            

            //Direct Translations:
            input = input.Replace("f", "ᚠ");
            input = input.Replace("u", "ᚢ");
            input = input.Replace("[þ,ð]", "ᚦ");
            input = input.Replace("þ", "ᚦ");
            input = input.Replace("ð", "ᚦ");
            input = input.Replace("a", "ᚨ");
            input = input.Replace("r", "ᚱ");
            input = input.Replace("k", "ᚲ");
            input = input.Replace("g", "ᚷ");
            input = input.Replace("w", "ᚹ");
            input = input.Replace("h", "ᚺ");
            input = input.Replace("n", "ᚾ");
            input = input.Replace("i", "ᛁ");
            input = input.Replace("j", "ᛃ");
            input = input.Replace("p", "ᛈ");
            input = input.Replace("ï", "ᛇ");
            input = input.Replace("z", "ᛉ");
            input = input.Replace("s", "ᛊ");
            input = input.Replace("t", "ᛏ");
            input = input.Replace("b", "ᛒ");
            input = input.Replace("e", "ᛖ");
            input = input.Replace("m", "ᛗ");
            input = input.Replace("l", "ᛚ");
            input = input.Replace("ŋ", "ᛜ");
            input = input.Replace("d", "ᛞ");
            input = input.Replace("o", "ᛟ");

            //Special Cases:
            if (spacecolon)
            {
                input = input.Replace(" ", ":");
            }

            //Cleanup:
            input = input.Replace("<OPBRAC>", "[");
            input = input.Replace("<CLBRAC>", "]");

            return input;
        }

        public string EFtoLet(string input, bool rembrackets, bool oddlets, bool spacecolon)
        {
            //Aproximated Transaltions:
            input = input.Replace("[ᚲ]", "c");
            input = input.Replace("[ᚲᚢ]", "q");
            input = input.Replace("[ᚠ]", "v");
            input = input.Replace("[ᚲᛊ]", "x");
            input = input.Replace("[ᛃ]", "y");

            //Direct Translations:
            input = input.Replace("ᚠ", "f");
            input = input.Replace("ᚢ", "u");
            input = input.Replace("ᚦ", "[þ,ð]");
            input = input.Replace("ᚨ", "a");
            input = input.Replace("ᚱ", "r");
            input = input.Replace("ᚲ", "k");
            input = input.Replace("ᚷ", "g");
            input = input.Replace("ᚹ", "w");
            input = input.Replace("ᚺ", "h");
            input = input.Replace("ᚾ", "n");
            input = input.Replace("ᛁ", "i");
            input = input.Replace("ᛃ", "j");
            input = input.Replace("ᛈ", "p");
            input = input.Replace("ᛇ", "ï");
            input = input.Replace("ᛉ", "z");
            input = input.Replace("ᛊ", "s");
            input = input.Replace("ᛏ", "t");
            input = input.Replace("ᛒ", "b");
            input = input.Replace("ᛖ", "e");
            input = input.Replace("ᛗ", "m");
            input = input.Replace("ᛚ", "l");
            input = input.Replace("ᛜ", "ŋ");
            input = input.Replace("ᛞ", "d");
            input = input.Replace("ᛟ", "o");

            //Special Cases:
            if (oddlets)
            {
                input = input.Replace("ŋ", "ng");
                input = input.Replace("þ", "th");
            }
            if (spacecolon)
            {
                input = input.Replace(":", " ");
            }

            return input;
        }

        public string LetToYF(string input, bool rembrackets, bool oddlets, bool spacecolon)
        {
            //Init:
            input = special_tolower(input);
            input = input.Replace("th", "þ");

            //Aproximated Translations
            if (!rembrackets)
            {
                input = input.Replace("ck", "[ᚴ]");
                input = input.Replace("c", "[ᚴ]");
                input = input.Replace("qu", "[ᚴᚢ]");
                input = input.Replace("q", "[ᚴᚢ]");
                input = input.Replace("x", "[ᚴᛋ]");
                input = input.Replace("j", "[ᚢ]");
                input = input.Replace("z", "[ᛋ]");
            }
            else
            {
                input = input.Replace("ck", "ᚴ");
                input = input.Replace("c", "ᚴ");
                input = input.Replace("qu", "ᚴᚢ");
                input = input.Replace("q", "ᚴᚢ");
                input = input.Replace("x", "ᚴᛋ");
                input = input.Replace("j", "ᚢ");
                input = input.Replace("z", "ᛋ");
            }

            //Fuck
            input = input.Replace("[f/v]", "ᚠ");
            input = input.Replace("[u/w,y,o,ø]", "ᚢ");
            input = input.Replace("[þ,ð]", "ᚦ");
            input = input.Replace("[ą,o,æ]", "ᚬ");
            input = input.Replace("[k,g]", "ᚴ");
            input = input.Replace("[i,e]", "ᛁ");
            input = input.Replace("[a,æ,e]", "ᛅ");
            input = input.Replace("[t,d]", "ᛏ");
            input = input.Replace("[b,p]", "ᛒ");

            //Direct Translations:
            input = input.Replace("f", "ᚠ"); //ᚠ
            input = input.Replace("v", "ᚠ");
            input = input.Replace("[u/w]", "ᚢ"); //ᚢ
            input = input.Replace("u", "ᚢ");
            input = input.Replace("w", "ᚢ");
            input = input.Replace("y", "ᚢ");
            input = input.Replace("o", "ᚢ");
            input = input.Replace("ø", "ᚢ");
            input = input.Replace("þ", "ᚦ"); //ᚦ
            input = input.Replace("ð", "ᚦ");
            input = input.Replace("ą", "ᚬ"); //ᚬ
            input = input.Replace("o", "ᚬ");
            input = input.Replace("æ", "ᚬ");
            input = input.Replace("r", "ᚱ"); //ᚱ
            input = input.Replace("k", "ᚴ"); //ᚴ
            input = input.Replace("g", "ᚴ");
            input = input.Replace("h", "ᚼ"); //ᚼ
            input = input.Replace("n", "ᚾ"); //ᚾ
            input = input.Replace("i", "ᛁ"); //ᛁ
            input = input.Replace("e", "ᛁ");
            input = input.Replace("a", "ᛅ"); //ᛅ
            input = input.Replace("æ", "ᛅ");
            input = input.Replace("e", "ᛅ");
            input = input.Replace("ʀ", "ᛦ"); //ᛦ
            input = input.Replace("s", "ᛋ"); //ᛋ
            input = input.Replace("t", "ᛏ"); //ᛏ
            input = input.Replace("d", "ᛏ");
            input = input.Replace("b", "ᛒ"); //ᛒ
            input = input.Replace("p", "ᛒ");
            input = input.Replace("m", "ᛘ"); //ᛘ
            input = input.Replace("l", "ᛚ"); //ᛚ

            //Special Cases:
            if (spacecolon)
            {
                input = input.Replace(" ", ":");
            }

            return input;
        }

        public string YFtoLet(string input, bool rembrackets, bool oddlets, bool spacecolon)
        {
            //Aproximated Translations:
            input = input.Replace("[ᚴ]", "c");
            input = input.Replace("[ᚴᚢ]", "q");
            input = input.Replace("[ᚴᛋ]", "x");
            input = input.Replace("[ᚢ]", "j");
            input = input.Replace("[ᛋ]", "z");

            //Direct Translations:
            input = input.Replace("ᚠ", "[f/v]");
            input = input.Replace("ᚢ", "[u/w,y,o,ø]");
            input = input.Replace("ᚦ", "[þ,ð]");
            input = input.Replace("ᚬ", "[ą,o,æ]");
            input = input.Replace("ᚱ", "r");
            input = input.Replace("ᚴ", "[k,g]");
            input = input.Replace("ᚼ", "h");
            input = input.Replace("ᚾ", "n");
            input = input.Replace("ᛁ", "[i,e]");
            input = input.Replace("ᛅ", "[a,æ,e]");
            input = input.Replace("ᛦ", "ʀ");
            input = input.Replace("ᛋ", "s");
            input = input.Replace("ᛏ", "[t,d]");
            input = input.Replace("ᛒ", "[b,p]");
            input = input.Replace("ᛘ", "m");
            input = input.Replace("ᛚ", "l");

            //Special Cases:
            if (oddlets)
            {
                input = input.Replace("þ", "th");
            }
            if (spacecolon)
            {
                input = input.Replace(":", " ");
            }

            return input;
        }

        public string LetToAS(string input, bool rembrackets, bool oddlets, bool spacecolon)
        {
            //Init:
            input = special_tolower(input);
            input = input.Replace("th", "þ");
            input = input.Replace("ng", "ŋ");

            //Aproximated Translations
            if (!rembrackets)
            {
                input = input.Replace("ck", "[ᚳ]");
                input = input.Replace("k", "[ᚳ]");
                input = input.Replace("qu", "[ᚳᚢ]");
                input = input.Replace("q", "[ᚳᚢ]");
                input = input.Replace("v", "[ᚠ]");
                input = input.Replace("z", "[ᛇ]");
            }
            else
            {
                input = input.Replace("ck", "ᚳ");
                input = input.Replace("k", "ᚳ");
                input = input.Replace("qu", "ᚳᚢ");
                input = input.Replace("q", "ᚳᚢ");
                input = input.Replace("v", "ᚠ");
                input = input.Replace("z", "ᛇ");
            }

            //Direct Translations:
            input = input.Replace("ea", "ᛠ");
            input = input.Replace("f", "ᚠ");
            input = input.Replace("u", "ᚢ");
            input = input.Replace("[þ,ð]", "ᚦ");
            input = input.Replace("þ", "ᚦ");
            input = input.Replace("ð", "ᚦ");
            input = input.Replace("o", "ᚩ");
            input = input.Replace("r", "ᚱ");
            input = input.Replace("c", "ᚳ");
            input = input.Replace("g", "ᚷ");
            input = input.Replace("w", "ᚹ");
            input = input.Replace("h", "ᚻ");
            input = input.Replace("n", "ᚾ");
            input = input.Replace("i", "ᛁ");
            if (!rembrackets) { input = input.Replace("j", "[ᛡ/ᛄ]"); }
                         else { input = input.Replace("j", "ᛡ"); }
            input = input.Replace("[ï,ɛ]", "ᛇ");
            input = input.Replace("ï", "ᛇ");
            input = input.Replace("ɛ", "ᛇ");
            input = input.Replace("p", "ᛈ");
            input = input.Replace("x", "ᛉ");
            if (!rembrackets) { input = input.Replace("s", "[ᛋ,ᚴ]"); }
                         else { input = input.Replace("s", "ᛋ"); }
            input = input.Replace("t", "ᛏ");
            input = input.Replace("b", "ᛒ");
            input = input.Replace("e", "ᛖ");
            input = input.Replace("m", "ᛗ");
            input = input.Replace("l", "ᛚ");
            input = input.Replace("ŋ", "ᛝ");
            input = input.Replace("œ", "ᛟ");
            input = input.Replace("d", "ᛞ");
            input = input.Replace("a", "ᚪ");
            input = input.Replace("æ", "ᚫ");
            input = input.Replace("y", "ᚣ");
            

            //Special Cases:
            if (spacecolon)
            {
                input = input.Replace(" ", ":");
            }


            return input;
        }

        public string AStoLet(string input, bool rembrackets, bool oddlets, bool spacecolon)
        {
            //Aproximated Translations:
            input = input.Replace("[ᚳ]", "k");
            input = input.Replace("[ᚳᚢ]", "q");
            input = input.Replace("[ᚠ]", "v");
            input = input.Replace("[ᛇ]", "z");

            //Direct Translations:
            input = input.Replace("ᚠ", "f");
            input = input.Replace("ᚢ", "u");
            input = input.Replace("ᚦ", "[þ,ð]");
            input = input.Replace("ᚩ", "o");
            input = input.Replace("ᚱ", "r");
            input = input.Replace("ᚳ", "c");
            input = input.Replace("ᚷ", "g");
            input = input.Replace("ᚹ", "w");
            input = input.Replace("ᚻ", "h");
            input = input.Replace("ᚾ", "n");
            input = input.Replace("ᛁ", "i");
            input = input.Replace("[ᛡ/ᛄ]", "j");
            input = input.Replace("ᛡ", "j");
            input = input.Replace("ᛄ", "j");
            input = input.Replace("ᛇ", "[ï,ɛ]");
            input = input.Replace("ᛈ", "p");
            input = input.Replace("ᛉ", "x");
            input = input.Replace("[ᛋ,ᚴ]", "s");
            input = input.Replace("ᛋ", "s");
            input = input.Replace("ᚴ", "s");
            input = input.Replace("ᛏ", "t");
            input = input.Replace("ᛒ", "b");
            input = input.Replace("ᛖ", "e");
            input = input.Replace("ᛗ", "m");
            input = input.Replace("ᛚ", "l");
            input = input.Replace("ᛝ", "ŋ");
            input = input.Replace("ᛟ", "œ");
            input = input.Replace("ᛞ", "d");
            input = input.Replace("ᚪ", "a");
            input = input.Replace("ᚫ", "æ");
            input = input.Replace("ᚣ", "y");
            input = input.Replace("ᛠ", "ea");

            //Special Cases:
            if (oddlets)
            {
                input = input.Replace("þ", "th");
                input = input.Replace("ŋ", "ng");
            }
            if (spacecolon)
            {
                input = input.Replace(":", " ");
            }

            return input;
        }

        public string LetToMD(string input, bool rembrackets, bool oddlets, bool spacecolon)
        {
            //Init
            input = special_tolower(input);
            input = input.Replace("th", "þ");

            //Aproximated Translations:
            if (!rembrackets)
            {
                input = input.Replace("j", "[ᚤ]");
            }
            else
            {
                input = input.Replace("j", "ᚤ");
            }

            //Direct Translations:
            input = input.Replace("a", "ᛆ");
            input = input.Replace("b", "ᛒ");
            input = input.Replace("c", "ᛍ");
            input = input.Replace("z", "ᛍ");
            if (!rembrackets) { input = input.Replace("s", "[ᛍ,ᛋ]"); } else { input = input.Replace("s", "ᛋ"); }
            input = input.Replace("d", "ᛑ");
            input = input.Replace("þ", "ᚦ");
            input = input.Replace("ð", "ᚧ");
            input = input.Replace("e", "ᛂ");
            input = input.Replace("f", "ᚠ");
            input = input.Replace("g", "ᚵ");
            input = input.Replace("h", "ᚼ");
            input = input.Replace("i", "ᛁ");
            input = input.Replace("k", "ᚴ");
            input = input.Replace("q", "ᚴ");
            input = input.Replace("l", "ᛚ");
            input = input.Replace("m", "ᛘ");
            input = input.Replace("n", "ᚿ");
            input = input.Replace("o", "ᚮ");
            input = input.Replace("p", "ᛔ");
            input = input.Replace("r", "ᚱ");
            input = input.Replace("t", "ᛐ");
            input = input.Replace("u", "ᚢ");
            if (!rembrackets) { input = input.Replace("v", "[ᚡ,ᚢ]"); } else { input = input.Replace("v", "ᚡ"); }
            input = input.Replace("w", "ᚥ");
            input = input.Replace("x", "ᛪ");
            if (!rembrackets) { input = input.Replace("y", "[ᛦ,ᚤ]"); } else { input = input.Replace("y", "ᛦ"); }
            input = input.Replace("[æ/ä]", "ᛅ");
            input = input.Replace("æ", "ᛅ");
            input = input.Replace("ä", "ᛅ");
            input = input.Replace("[ö/ø]", "ᚯ");
            input = input.Replace("ö", "ᚯ");
            input = input.Replace("ø", "ᚯ");

            //Special Cases:
            if (spacecolon)
            {
                input = input.Replace(" ", ":");
            }

            return input;
        }

        public string MDtoLet(string input, bool rembrackets, bool oddlets, bool spacecolon)
        {
            //Aproximated Translations:
            input = input.Replace("[ᚤ]", "j");

            //Direct Translations:
            input = input.Replace("ᛆ", "a");
            input = input.Replace("ᛒ", "b");
            input = input.Replace("[ᛍ,ᛋ]", "s");
            input = input.Replace("ᛋ", "s");
            input = input.Replace("ᛍ", "[c,s,z]");
            input = input.Replace("ᛑ", "d");
            input = input.Replace("ᚦ", "þ");
            input = input.Replace("ᚧ", "ð");
            input = input.Replace("ᛂ", "e");
            input = input.Replace("ᚠ", "f");
            input = input.Replace("ᚵ", "g");
            input = input.Replace("ᚼ", "h");
            input = input.Replace("ᛁ", "i");
            input = input.Replace("ᚴ", "[k,q]");
            input = input.Replace("ᛚ", "l");
            input = input.Replace("ᛘ", "m");
            input = input.Replace("ᚿ", "n");
            input = input.Replace("ᚮ", "o");
            input = input.Replace("ᛔ", "p");
            input = input.Replace("ᚱ", "r");
            input = input.Replace("ᛐ", "t");
            input = input.Replace("[ᚡ,ᚢ]", "v");
            input = input.Replace("ᚡ", "v");
            input = input.Replace("ᚢ", "[u,v]");
            input = input.Replace("ᚥ", "w");
            input = input.Replace("ᛪ", "x");
            input = input.Replace("[ᛦ,ᚤ]", "y");
            input = input.Replace("ᛦ", "y");
            input = input.Replace("ᚤ", "y");
            input = input.Replace("ᛅ", "[æ/ä]");
            input = input.Replace("ᚯ", "[ö/ø]");

            //Special Cases:
            if (oddlets)
            {
                input = input.Replace("þ", "th");
                input = input.Replace("ŋ", "ng");
            }
            if (spacecolon)
            {
                input = input.Replace(":", " ");
            }

            return input;
        }
    }
}
