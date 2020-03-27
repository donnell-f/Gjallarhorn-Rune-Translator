namespace Gjallarhorn2
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.outputTB = new System.Windows.Forms.RichTextBox();
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.titlebar = new System.Windows.Forms.PictureBox();
            this.cleartext = new System.Windows.Forms.Button();
            this.inputTB = new System.Windows.Forms.RichTextBox();
            this.outputLabel = new System.Windows.Forms.Label();
            this.inputLabel = new System.Windows.Forms.Label();
            this.alphabetControl = new System.Windows.Forms.ComboBox();
            this.directionControl = new System.Windows.Forms.ComboBox();
            this.convButton = new System.Windows.Forms.Button();
            this.settingsTab = new System.Windows.Forms.Button();
            this.tabPage2 = new System.Windows.Forms.TabPage();
            this.backbutton = new System.Windows.Forms.Button();
            this.spacesColons = new System.Windows.Forms.CheckBox();
            this.oddLetters = new System.Windows.Forms.CheckBox();
            this.aproxBrackets = new System.Windows.Forms.CheckBox();
            this.postproText = new System.Windows.Forms.Label();
            this.tabControl1.SuspendLayout();
            this.tabPage1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.titlebar)).BeginInit();
            this.tabPage2.SuspendLayout();
            this.SuspendLayout();
            // 
            // outputTB
            // 
            this.outputTB.Font = new System.Drawing.Font("Courier New", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.outputTB.Location = new System.Drawing.Point(587, 37);
            this.outputTB.Name = "outputTB";
            this.outputTB.Size = new System.Drawing.Size(247, 454);
            this.outputTB.TabIndex = 1;
            this.outputTB.Text = "";
            // 
            // tabControl1
            // 
            this.tabControl1.Controls.Add(this.tabPage1);
            this.tabControl1.Controls.Add(this.tabPage2);
            this.tabControl1.Location = new System.Drawing.Point(-6, -33);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(856, 533);
            this.tabControl1.TabIndex = 4;
            // 
            // tabPage1
            // 
            this.tabPage1.BackColor = System.Drawing.SystemColors.Control;
            this.tabPage1.Controls.Add(this.titlebar);
            this.tabPage1.Controls.Add(this.cleartext);
            this.tabPage1.Controls.Add(this.inputTB);
            this.tabPage1.Controls.Add(this.outputLabel);
            this.tabPage1.Controls.Add(this.inputLabel);
            this.tabPage1.Controls.Add(this.alphabetControl);
            this.tabPage1.Controls.Add(this.directionControl);
            this.tabPage1.Controls.Add(this.convButton);
            this.tabPage1.Controls.Add(this.outputTB);
            this.tabPage1.Controls.Add(this.settingsTab);
            this.tabPage1.Location = new System.Drawing.Point(4, 25);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage1.Size = new System.Drawing.Size(848, 504);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "tabPage1";
            // 
            // titlebar
            // 
            this.titlebar.Image = ((System.Drawing.Image)(resources.GetObject("titlebar.Image")));
            this.titlebar.Location = new System.Drawing.Point(292, 67);
            this.titlebar.Name = "titlebar";
            this.titlebar.Size = new System.Drawing.Size(271, 104);
            this.titlebar.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.titlebar.TabIndex = 10;
            this.titlebar.TabStop = false;
            // 
            // cleartext
            // 
            this.cleartext.Location = new System.Drawing.Point(315, 409);
            this.cleartext.Name = "cleartext";
            this.cleartext.Size = new System.Drawing.Size(227, 28);
            this.cleartext.TabIndex = 9;
            this.cleartext.Text = "Clear";
            this.cleartext.UseVisualStyleBackColor = true;
            this.cleartext.Click += new System.EventHandler(this.cleartext_Click);
            // 
            // inputTB
            // 
            this.inputTB.Font = new System.Drawing.Font("Courier New", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.inputTB.Location = new System.Drawing.Point(17, 37);
            this.inputTB.Name = "inputTB";
            this.inputTB.Size = new System.Drawing.Size(247, 454);
            this.inputTB.TabIndex = 8;
            this.inputTB.Text = "";
            // 
            // outputLabel
            // 
            this.outputLabel.AutoSize = true;
            this.outputLabel.Location = new System.Drawing.Point(584, 17);
            this.outputLabel.Name = "outputLabel";
            this.outputLabel.Size = new System.Drawing.Size(55, 17);
            this.outputLabel.TabIndex = 7;
            this.outputLabel.Text = "Output:";
            // 
            // inputLabel
            // 
            this.inputLabel.AutoSize = true;
            this.inputLabel.Location = new System.Drawing.Point(14, 17);
            this.inputLabel.Name = "inputLabel";
            this.inputLabel.Size = new System.Drawing.Size(43, 17);
            this.inputLabel.TabIndex = 6;
            this.inputLabel.Text = "Input:";
            // 
            // alphabetControl
            // 
            this.alphabetControl.FormattingEnabled = true;
            this.alphabetControl.Items.AddRange(new object[] {
            "Elder Futhark",
            "Younger Futhark",
            "Anglo Saxon"});
            this.alphabetControl.Location = new System.Drawing.Point(315, 379);
            this.alphabetControl.Name = "alphabetControl";
            this.alphabetControl.Size = new System.Drawing.Size(227, 24);
            this.alphabetControl.TabIndex = 5;
            this.alphabetControl.Text = "Runic Alphabet";
            // 
            // directionControl
            // 
            this.directionControl.FormattingEnabled = true;
            this.directionControl.Items.AddRange(new object[] {
            "Letters --> Runes",
            "Runes --> Letters"});
            this.directionControl.Location = new System.Drawing.Point(315, 349);
            this.directionControl.Name = "directionControl";
            this.directionControl.Size = new System.Drawing.Size(227, 24);
            this.directionControl.TabIndex = 4;
            this.directionControl.Text = "Translation Direction";
            // 
            // convButton
            // 
            this.convButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 7.8F);
            this.convButton.Location = new System.Drawing.Point(315, 292);
            this.convButton.Name = "convButton";
            this.convButton.Size = new System.Drawing.Size(169, 51);
            this.convButton.TabIndex = 2;
            this.convButton.Text = "Convert";
            this.convButton.UseVisualStyleBackColor = true;
            this.convButton.Click += new System.EventHandler(this.convButton_Click);
            // 
            // settingsTab
            // 
            this.settingsTab.Font = new System.Drawing.Font("Microsoft Sans Serif", 7.8F);
            this.settingsTab.Location = new System.Drawing.Point(490, 292);
            this.settingsTab.Name = "settingsTab";
            this.settingsTab.Size = new System.Drawing.Size(52, 51);
            this.settingsTab.TabIndex = 3;
            this.settingsTab.Text = " ⚙";
            this.settingsTab.UseVisualStyleBackColor = true;
            this.settingsTab.Click += new System.EventHandler(this.settingsTab_Click);
            // 
            // tabPage2
            // 
            this.tabPage2.BackColor = System.Drawing.SystemColors.Control;
            this.tabPage2.Controls.Add(this.backbutton);
            this.tabPage2.Controls.Add(this.spacesColons);
            this.tabPage2.Controls.Add(this.oddLetters);
            this.tabPage2.Controls.Add(this.aproxBrackets);
            this.tabPage2.Controls.Add(this.postproText);
            this.tabPage2.Location = new System.Drawing.Point(4, 25);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage2.Size = new System.Drawing.Size(848, 504);
            this.tabPage2.TabIndex = 1;
            this.tabPage2.Text = "tabPage2";
            // 
            // backbutton
            // 
            this.backbutton.Font = new System.Drawing.Font("Microsoft Sans Serif", 7.8F);
            this.backbutton.Location = new System.Drawing.Point(782, 440);
            this.backbutton.Name = "backbutton";
            this.backbutton.Size = new System.Drawing.Size(52, 51);
            this.backbutton.TabIndex = 9;
            this.backbutton.Text = " ←";
            this.backbutton.UseVisualStyleBackColor = true;
            this.backbutton.Click += new System.EventHandler(this.backbutton_Click);
            // 
            // spacesColons
            // 
            this.spacesColons.AutoSize = true;
            this.spacesColons.Location = new System.Drawing.Point(29, 116);
            this.spacesColons.Name = "spacesColons";
            this.spacesColons.Size = new System.Drawing.Size(305, 21);
            this.spacesColons.TabIndex = 8;
            this.spacesColons.Text = "Replace spaces with colons and vice-versa.";
            this.spacesColons.UseVisualStyleBackColor = true;
            // 
            // oddLetters
            // 
            this.oddLetters.AutoSize = true;
            this.oddLetters.Location = new System.Drawing.Point(29, 89);
            this.oddLetters.Name = "oddLetters";
            this.oddLetters.Size = new System.Drawing.Size(539, 21);
            this.oddLetters.TabIndex = 7;
            this.oddLetters.Text = "Replace odd letters with modern variants (e.g. \"ŋ\" and \"þ\" become \"ng\" and \"th\")." +
    "";
            this.oddLetters.UseVisualStyleBackColor = true;
            // 
            // aproxBrackets
            // 
            this.aproxBrackets.AutoSize = true;
            this.aproxBrackets.Location = new System.Drawing.Point(29, 62);
            this.aproxBrackets.Name = "aproxBrackets";
            this.aproxBrackets.Size = new System.Drawing.Size(228, 21);
            this.aproxBrackets.TabIndex = 6;
            this.aproxBrackets.Text = "Remove aproximation brackets.";
            this.aproxBrackets.UseVisualStyleBackColor = true;
            // 
            // postproText
            // 
            this.postproText.AutoSize = true;
            this.postproText.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F);
            this.postproText.Location = new System.Drawing.Point(26, 30);
            this.postproText.Name = "postproText";
            this.postproText.Size = new System.Drawing.Size(172, 18);
            this.postproText.TabIndex = 5;
            this.postproText.Text = "Postprocessing Options:";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(844, 495);
            this.Controls.Add(this.tabControl1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximizeBox = false;
            this.Name = "Form1";
            this.Text = "Gjallarhorn Rune Translator";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.tabControl1.ResumeLayout(false);
            this.tabPage1.ResumeLayout(false);
            this.tabPage1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.titlebar)).EndInit();
            this.tabPage2.ResumeLayout(false);
            this.tabPage2.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion
        private System.Windows.Forms.RichTextBox outputTB;
        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tabPage1;
        private System.Windows.Forms.TabPage tabPage2;
        private System.Windows.Forms.ComboBox alphabetControl;
        private System.Windows.Forms.ComboBox directionControl;
        private System.Windows.Forms.Button convButton;
        private System.Windows.Forms.Button settingsTab;
        private System.Windows.Forms.Label outputLabel;
        private System.Windows.Forms.Label inputLabel;
        private System.Windows.Forms.Label postproText;
        private System.Windows.Forms.CheckBox aproxBrackets;
        private System.Windows.Forms.CheckBox spacesColons;
        private System.Windows.Forms.CheckBox oddLetters;
        private System.Windows.Forms.Button backbutton;
        private System.Windows.Forms.RichTextBox inputTB;
        private System.Windows.Forms.Button cleartext;
        private System.Windows.Forms.PictureBox titlebar;
    }
}

