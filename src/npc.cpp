#include "../header/npc.hpp"

npc::npc(int id) {
    
    // Chad & Thad
    if (id == 1) {
        npcName = "Chad & Thad";
        npcType = "Popular";
            
        dialogue[0] = "Hey bro, we're Chad and Thad! How are you liking the party?";
        responses[0][0] = "It's really fun! The frat seems really cool.";
        responses[0][1] = "It's cool… I guess. I met some new people.";
        responses[0][2] = "Not really my jam, I think I'll leave early.";
        responses[0][3] = "This party sucks! Frat bros are the worst.";

        dialogue[1] = "Ohh okay. Do you like the music?! We're on aux right now!";
        responses[1][0] = "Yeah! I love EDM!! Your guys' music taste is WICKED!!";
        responses[1][1] = "I like it! You should play some pop though!";
        responses[1][2] = "It's okay. You should change the playlist right now. I'm getting tired of it.";
        responses[1][3] = "The music is really bad. Your music taste is that of a child";

        dialogue[2] = "Hey... do you want any... vitamins?";
        responses[2][0] = "Hell yeah! What kind? Ahh nevermind, I don't care.";
        responses[2][1] = "Mmm. I guess it wouldn't hurt... Okay!";
        responses[2][2] = "Nah, I'm okay, thanks for asking though.";
        responses[2][3] = "Hell no! You guys are the worst type of people ever.";

        dialogue[3] = "What are your plans after this, bro?";
        responses[3][0] = "I'm staying for the after party!";
        responses[3][1] = "I'm probably going to a different party after this.";
        responses[3][2] = "I'm gonna go honme after the party.";
        responses[3][3] = "I'm leaving right now. I hate it here.";

        dialogue[4] = "Well, maybe see you around, dude bro!";
    }
    
    // Bethany
    if (id == 2) {
        npcName = "Bethany";
        npcType = "Popular";
        
        dialogue[0] = "What are you looking at?";
        responses[0][0] = "I just wanted to say 'hi'! You're very pretty. What's your name?";
        responses[0][1] = "I'm sorry. I was just admiring you. What's your name?";
        responses[0][2] = "My bad. Didn't know using my eyes was an issue...";
        responses[0][3] = "Not much. You're not very pretty.";

        dialogue[1] = "You don't know who I am?! I'm Bethany! The sorority president!";
        responses[1][0] = "I've heard of you! Your beauty precedes you! I wanted to talk to you about the sorority, actually.";
        responses[1][1] = "Ohhh, you're Bethany? I've heard of so many nice things about you. Do you have time to talk about the sorority?";
        responses[1][2] = "Oh... so you're Bethany? I've heard nothing but bad things about you and the sorority.";
        responses[1][3] = "I know who you are. You're that pretentious mean girl who runs the sorority that no one likes!";

        dialogue[2] = "The sorority is actually really fun! We helped the frat wit the drinks for the party. We made the 'punch' ourselves. Do you want any?";
        responses[2][0] = "Oou! I already have some, but I'll take some more!";
        responses[2][1] = "That sounds pretty good, sure.";
        responses[2][2] = "I'm good,m I think I need to drink more water.";
        responses[2][3] = "Eww... That sounds gross, I'll pass.";

        dialogue[3] = "Well even though you're not that pretty, the sorority is still looking for more pledges... So I guess I'll extend you an invitation.";
        responses[3][0] = "OMG?! Really?! Thank you so much! I look forward to seeing you at the next meeting.";
        responses[3][1] = "Thank you so mjch! I'll definitely make time to go to one of the events.";
        responses[3][2] = "The sorority isn't really my style.";
        responses[3][3] = "ME?! Join the sorority ?!? HELL NO.";

        dialogue[4] = "This talk was... less than delightful. Maybe see you later... Hopefully not.";
    }
    
    // Veronica
    if (id == 3) {
        npcName = "Veronica";
        npcType = "Outcast";
        
        dialogue[0] = "Look what the cat dragged in…";
        responses[0][0] = "Hi! I really like your style. What's your name?";
        responses[0][1] = "I love cats! Nice to meet you.";
        responses[0][2] = "Haha... What an interesting thing to say.";
        responses[0][3] = "And you are..?";

        dialogue[1] = "I'm Veronica. I'm only here because my friend is here. This place is so boring.";
        responses[1][0] = "I get that, I'm actually not really liking it either";
        responses[1][1] = "Ahh I see. Yeah, I only came because I wasn't busy tonight";
        responses[1][2] = "You don't like it here? I think the party is actually really fun!";
        responses[1][3] = "Oh wow, what a buzzkill you are. The frat put a lot of effort into the party...";

        dialogue[2] = "Yeah, well, no one here is cool. Care to change my mind?";
        responses[2][0] = "I mean, you seem cool. I'd love to get to know you better.";
        responses[2][1] = "I don't know if I could. You seem too cool.";
        responses[2][2] = "I don't really know how that would work.";
        responses[2][3] = "I don't have to prove myself to you.";

        dialogue[3] = "Hey, do you happen to have any... Uhh... vitamins? Of any kind?";
        responses[3][0] = "I actually do. Just reach in the baggie and pick a few.";
        responses[3][1] = "Yeah, I do. Did you eat and drink enough water, though?";
        responses[3][2] = "Uhh, no, I don't do that type of stuff.";
        responses[3][3] = "Ohh, you're one of those!!! That's why you're so weird, you emo freak.";

        dialogue[4] = "Nevermind. I see my friend. I'm leaving now. Bye, weirdo.";
    }
    
    // Denzel
    if (id == 4) {
        npcName = "Denzel";
        npcType = "Normie";
        
        dialogue[0] = "Hi! I'm Denzel, frat president and host of this party. Are you enjoying yourself?";
        responses[0][0] = "I am! I'm really liking it here. Everyone is so nice.";
        responses[0][1] = "Yeah, it's pretty cool here.";
        responses[0][2] = "Meh. I was actually thinking about leaving soon.";
        responses[0][3] = "I hate it here. I wish I just stayed in my dorm room.";

        dialogue[1] = "Would you consider joining the frat? It's rush week this week and we're looking for new recruits!";
        responses[1][0] = "I'd love to! I have been planning on joining the frat since the beginning of the school year, but never got around to it.";
        responses[1][1] = "I'll definitely think about it. I don't know if Greek life is what I want to commit myself to.";
        responses[1][2] = "Nah. That's not my style. I'm more interested in other extracurriculars.";
        responses[1][3] = "Nope. I truly despise the frat. Most of you seem like horrible people.";

        dialogue[2] = "I see, I see. Do you listen to Ice Spice?! I really like her music.";
        responses[2][0] = "I LOVE ICE SPICE. Her music is so good! I'm for real a Munchkin!.";
        responses[2][1] = "Ice Spice is good! I like that one song… something something… munch?";
        responses[2][2] = "I don't really like her music, but she seems cool.";
        responses[2][3] = "I hate that kind of music.";

        dialogue[3] = "Ahh okay. Have you seen Cloud recently? I've been trying to find them.";
        responses[3][0] = "Yeah, I have! They were looking for you too.I think I saw them by the bathroom earlier.";
        responses[3][1] = "I don't know who that is. I'm sorry.";
        responses[3][2] = "Uhhmmm, I haven't seen them.";
        responses[3][3] = "I saw them, but I won't tell you where.";

        dialogue[4] = "I'll catch you later then. I'm gonna go look for Cloud. It was nice to meet you.";
    }        
    
    // Marcus
    if (id == 5) {
        npcName = "Marcus";
        npcType = "Alpha Male";
        
        dialogue[0] = "Oh hey. Can't believe there are so many girls here. They should be in their homes, cleaning like good women should be.";
        responses[0][0] = "I know right! Can't believe it. Women, am I right?";
        responses[0][1] = "Haha. Yeah, I guess so.";
        responses[0][2] = "Uhm… That's a weird thing to say.";
        responses[0][3] = "You're being a prick. Stop talking, weirdo.";

        dialogue[1] = "Well… women these days don't do what they're meant to. They have this thing called “free will” or something.";
        responses[1][0] = "They definitely shouldn't have free will.";
        responses[1][1] = "Ehh… women are whatever. Bros before hos!";
        responses[1][2] = "Don't talk about women like that! You've no idea the amount of struggle they go through.";
        responses[1][3] = "You are a small, weak person. Don't even try to call yourself a man, you rat.";

        dialogue[2] = "Hey, so I know this is sudden, but… I feel like I can trust you. I'll let you in on a little secret… I have an incredibly small… sense of self-worth.";
        responses[2][0] = "I hope you get the help you need…";
        responses[2][1] = "Oh… I'm sorry about that.";
        responses[2][2] = "Okay… And I'm supposed to do what with that information?";
        responses[2][3] = "YEAH NO KIDDING!!! I hope you rot in hell. You don't even deserve redemption.";

        dialogue[3] = "I'm really sorry about what I said earlier. I'm a little inebriated and I'm not myself right now. I'm just insecure because no girls like me.";
        responses[3][0] = "Oh, don't worry about it! I was actually agreeing with you.";
        responses[3][1] = "Ahh, it's okay. I hope you feel better soon.";
        responses[3][2] = "You were being a misogynist before, and you think I'm just going to accept your apology and pity you?";
        responses[3][3] = "You really are a piece of work. First you were a misogynist, now you're being a pick me. I don't feel sorry for you.";

        dialogue[4] = "I'm just gonna go now. Thanks for talking for a bit.";
    }
    
    // Cloud
    if (id == 6) {
        npcName = "Cloud";
        npcType = "Normie";

        dialogue[0] = "Hiii, you're looking a little lonely. I'm Cloud! How are you?";
        responses[0][0] = "Heyyy, I'm doing good. You seem really cool!";
        responses[0][1] = "Hi! I'm doing good.";
        responses[0][2] = "I'm doing okay, could be better I guess.";
        responses[0][3] = "What kind of name is Cloud?? How peculiar.";

        dialogue[1] = "Are you having fun? I personally wish they had more snacks. I'll have to have a word with Denzel.";
        responses[1][0] = "I am having fun! I agree, I wish there were more GoldFish.";
        responses[1][1] = "The party's been alright, I guess. I'm a little tired.";
        responses[1][2] = "Meh. The party's kinda boring.";
        responses[1][3] = "Oh wow, you really are lame. Complaining about the snacks? Pretty pathetic.";

        dialogue[2] = "Well… Wanna hear a joke? Okay, so, what do you call a sheep with no legs?";
        responses[2][0] = "What do you call a sheep with no legs?";
        responses[2][1] = "Hmm… uhh… A shrub..?";
        responses[2][2] = "I've no idea.";
        responses[2][3] = "This is stupid.";

        dialogue[3] = "A CLOUD!!! LIKE MY NAME. Hahaha. Yeah, anyway, have you heard of the LGBTQIA+ club on campus? I'm the club president and we're looking for more members.";
        responses[3][0] = "I was actually thinking of joining! The club seems really fun.";
        responses[3][1] = "I've heard of it. I think I saw one of the events you guys did earlier this week.";
        responses[3][2] = "Ohh… I'm not really sure about joining. Not really my crowd.";
        responses[3][3] = "Mmm. That sounds dumb.";

        dialogue[4] = "Well, I hope you do join! We're always looking for more members! See ya later.";
    }
    
    // Christina
    if (id == 7) {
        npcName = "Christina";
        npcType = "Outcast";

        dialogue[0] = "Oh, excuse me, sorry I didn't mean to get in your way.";
        responses[0][0] = "Oh! I actually wanted to talk to you! You seem interesting.";
        responses[0][1] = "No worries, you're not in the way.";
        responses[0][2] = "You're excused.";
        responses[0][3] = "Try keeping your eyes up, and maybe you'll see when people are near you.";

        dialogue[1] = "Oh wow! You're actually talking to me? No one talks to me… The only reason I'm here is because Denzel is my brother and he forced me to come.";
        responses[1][0] = "Of course I'm talking to you! I'm glad you're here too. I was hoping to get to know you better.";
        responses[1][1] = "Well, you seemed interesting so I came over here to talk with you.";
        responses[1][2] = "I can see why people don't talk to you, but you should have more confidence!";
        responses[1][3] = "Yeah, you're kinda lame. But, I'm here now, so I guess I'll talk more with you.";

        dialogue[2] = "Well… I like Captain of the Bracelets. My favorite character is Bodo Fraggins. Have you read or watched it?";
        responses[2][0] = "I've read the books! They were really fun and the plot was really good. I really liked the Hobbit as well.";
        responses[2][1] = "I've only seen the movies. They were really cool! I don't really like reading, though.";
        responses[2][2] = "I've never read or seen them. They seem boring. I'm more interested in things like… Not as nerdy.";
        responses[2][3] = "Woooow. So you really are nerdy. I just thought it was an aesthetic you were following or something.";

        dialogue[3] = "Interesting… Do you listen to rock music? I like Led Zeppelin and Black Sabbath.";
        responses[3][0] = "Rock is so cool! Really makes me feel alive, y'know?";
        responses[3][1] = "I've only heard a few of their songs, I know they're popular though!";
        responses[3][2] = "Rock music..? I don't listen to rock music. I'm more of a pop music person.";
        responses[3][3] = "Oh woooow, you think you're soooo different because you listen to old school rock? Lame.";

        dialogue[4] = "Oh, someone is calling me, I'm gonna take this. This was an interesting exchange. Uhm… Kay, bye.";
    }
    
    // Trevor
    if (id == 8) {
        npcName = "Trevor";
        npcType = "Normie";
             
        dialogue[0] = "Oh, hey! I'm Trevor!";
        responses[0][0] = "Hi! I've seen you run for the track team!";
        responses[0][1] = "Hey!";
        responses[0][2] = "What's with the getup?";
        responses[0][3] = "What are you wearing?? Is that a track uniform? Why are you wearing that here...";

        dialogue[1] = "Nice to meet you! Yeah, I'm on the track team. Made it to top 7 runners as a freshman! Isn't that sick?!";
        responses[1][0] = "Wow! Good job! You must really be popular with everyone.";
        responses[1][1] = "That's cool! I bet you have tons of friends.";
        responses[1][2] = "Oh wow… No need to brag.";
        responses[1][3] = "HAHAHA. You run track? That's lame.";

        dialogue[2] = "I mean, I'm not too popular. I'm still just a pledge for the frat, so I get hazed a lot. Most of the upperclassmen just treat me like an errand boy.";
        responses[2][0] = "Ohh, I'm sorry about that. I'll be your friend! And I'm sure you'll be a real frat guy soon.";
        responses[2][1] = "Oh dang, that sucks. Hopefully the guys will treat you better.";
        responses[2][2] = "I wouldn't expect anything less from a frat.";
        responses[2][3] = "You probably deserve all the hazing. You're kinda lame.";

        dialogue[3] = "Well… I guess I wouldn't mind being friends with you. You're upfront and I like that.";
        responses[3][0] = "Yay! We should hang out later! I have some other friends that I can introduce you to.";
        responses[3][1] = "Okay cool. Let's do something next week.";
        responses[3][2] = "Oh… uhhhm. The feelings are not mutual.";
        responses[3][3] = "Me? Be friends with you?! As if…";

        dialogue[4] = "Oh wow. Okay. See you later then.";
    }
    
    // Harper
    if (id == 9) {
        npcName = "Harper";
        npcType = "Outcast";
             
        dialogue[0] = "Heyyy, you're pretty. I'm Harper.";
        responses[0][0] = "Oh, thank you! Are you okay? You seem a little... not here.";
        responses[0][1] = "You seem a little off, are you good?";
        responses[0][2] = "Wow, forward are we?";
        responses[0][3] = "Oh, hmm, thanks I guess.";

        dialogue[1] = "Do you have any snacks? I've got the munchies and I can't bring myself to walk over to the kitchen.";
        responses[1][0] = "Yeah, here, have some chips! How long have you been here?";
        responses[1][1] = "Uhh, sure… I can spare a few chips. What have you been up to?";
        responses[1][2] = "I don't have any snacks right now, dude.";
        responses[1][3] = "I'm not sharing my snacks. I'm hungry too!";

        dialogue[2] = "Snacks… Wait did you ask me something..? I forgot. Anyway, do you want any gummies? I have a lot extra.";
        responses[2][0] = "Oou yes please! I haven't had gummies in a while.";
        responses[2][1] = "Oh, it all makes sense now. Yeah, I'll take some!";
        responses[2][2] = "No thanks. I'm not into that.";
        responses[2][3] = "Everything makes sense now! You're being a pain because of the gummies! Yeah, no, I'll pass";

        dialogue[3] = "Hm… Do you know the conspiracy about Walt Disney being frozen and one day they're going to bring him back when technology has advanced that far? And to cover up this conspiracy, Disney released the movie Frozen? So if you search Walt Disney Frozen, the movie pops up!";
        responses[3][0] = "Oh, that's actually really interesting. Tell me more about it. It seems like you're really passionate about this topic.";
        responses[3][1] = "I've never heard of this theory before. It's riveting, but I doubt it actually happened.";
        responses[3][2] = "What a silly story! Who told you that?";
        responses[3][3] = "That's literally the dumbest thing I've ever heard. I'm pretty sure Walt Disney isn't frozen.";

        dialogue[4] = "... Were you talking to me?";
    }
    
    // Isaiah
    if (id == 10) {
         npcName = "Isaiah";
        npcType = "Popular";
             
        dialogue[0] = "Wooow, I love your 'fit, where'd you get it..?!";
        responses[0][0] = "Oh my gooood, stoooop! Your outfit is amazing!";
        responses[0][1] = "Oh thanks! I got it from a thrift store near campus.";
        responses[0][2] = "You wouldn't know… It's out of your price range.";
        responses[0][3] = "Why would I tell you? Your 'fit is uglyyyy.";

        dialogue[1] = "Oh… Well it was actually custom made by a designer named Cho-cho Kanel.";
        responses[1][0] = "Oh wow! You must be really rich!";
        responses[1][1] = "That's really cool!";
        responses[1][2] = "Oh… so you're like super uptight!";
        responses[1][3] = "Didn't ask.";

        dialogue[2] = "Yeah, I guess you could say I'm prestigious… unlike you.";
        responses[2][0] = "I can tell! You definitely look the part!";
        responses[2][1] = "Well, I wish I had a personal designer.";
        responses[2][2] = "I don't need a designer, I'm independent… Couldn't be you, though.";
        responses[2][3] = "You don't even look good in it...";

        dialogue[3] = "Well, only significant people have designers.";
        responses[3][0] = "You're really cool, Mister... Wait! I never caught your name. What is it?";
        responses[3][1] = "I know your designer's name, but what's yours?";
        responses[3][2] = "Oh, I feel bad for whoever's friends with... Wait, who are you?";
        responses[3][3] = "Who do you think you are?!";

        dialogue[4] = "I'm Isaiah, but I'm reeaaaally busy, sooo bye!";
    }
}

string npc::getName() {
    return npcName;
}

string npc::getType() {
    return npcType;
}

void npc::printdialogue() {
    cout << dialogue[0] << endl;
    for (int i = 0; i < 4; ++i) {
        cout << responses[0][i] << endl;
    }
    // Player Input, passes in npcType

    cout << dialogue[1] << endl;
    for (int i = 0; i < 4; ++i) {
        cout << responses[1][i] << endl;
    }
    // Player Input, passes in npcType

    cout << dialogue[2] << endl;
    for (int i = 0; i < 4; ++i) {
        cout << responses[2][i] << endl;
    }
    // Player Input, passes in npcType

    cout << dialogue[3] << endl;
    for (int i = 0; i < 4; ++i) {
        cout << responses[3][i] << endl;
    }
    // Player Input, passes in npcType

    cout << dialogue[4] << endl;
}