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
    }

    public class Converter
    {
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
            input = input.Replace("A", "a");
            input = input.Replace("ʒ", "ɛ");

            return input;
        }
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
                input = input.Replace("q", "[ᚲᚢ]");
                input = input.Replace("v", "[ᚠ]");
                input = input.Replace("x", "[ᚲᛊ]");
                input = input.Replace("y", "[ᛃ]");
            }
            else
            {
                input = input.Replace("ck", "ᚲ");
                input = input.Replace("c", "ᚲ");
                input = input.Replace("q", "ᚲᚢ");
                input = input.Replace("v", "ᚠ");
                input = input.Replace("x", "ᚲᛊ");
                input = input.Replace("y", "ᛃ");
            }
            

            //Direct Translations:
            input = input.Replace("f", "ᚠ");
            input = input.Replace("u", "ᚢ");
            input = input.Replace("þ", "ᚦ");
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
            input = input.Replace("ᚦ", "þ");
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
                input = input.Replace("q", "[ᚴᚢ]");
                input = input.Replace("x", "[ᚴᛋ]");
                input = input.Replace("j", "[ᚢ]");
                input = input.Replace("z", "[ᛋ]");
            }
            else
            {
                input = input.Replace("ck", "ᚴ");
                input = input.Replace("c", "ᚴ");
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
                input = input.Replace("q", "[ᚳᚢ]");
                input = input.Replace("v", "[ᚠ]");
                input = input.Replace("z", "[ᛇ]");
            }
            else
            {
                input = input.Replace("ck", "ᚳ");
                input = input.Replace("k", "ᚳ");
                input = input.Replace("q", "ᚳᚢ");
                input = input.Replace("v", "ᚠ");
                input = input.Replace("z", "ᛇ");
            }

            //Direct Translations:
            input = input.Replace("ea", "ᛠ");
            input = input.Replace("f", "ᚠ");
            input = input.Replace("u", "ᚢ");
            input = input.Replace("þ", "ᚦ");
            input = input.Replace("o", "ᚩ");
            input = input.Replace("r", "ᚱ");
            input = input.Replace("c", "ᚳ");
            input = input.Replace("g", "ᚷ");
            input = input.Replace("w", "ᚹ");
            input = input.Replace("h", "ᚻ");
            input = input.Replace("n", "ᚾ");
            input = input.Replace("i", "ᛁ");
            input = input.Replace("j", "[ᛡ/ᛄ]");
            input = input.Replace("ï", "ᛇ");
            input = input.Replace("ɛ", "ᛇ");
            input = input.Replace("[ï,ɛ]", "ᛇ");
            input = input.Replace("p", "ᛈ");
            input = input.Replace("x", "ᛉ");
            input = input.Replace("s", "[ᛋ,ᚴ]");
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
            input = input.Replace("ᚦ", "þ");
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
    }
}
