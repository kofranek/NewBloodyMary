(function (cjs, an) {

var p; // shortcut to reference prototypes
var lib={};var ss={};var img={};
lib.ssMetadata = [];


// symbols:
// helper functions:

function mc_symbol_clone() {
	var clone = this._cloneProps(new this.constructor(this.mode, this.startPosition, this.loop));
	clone.gotoAndStop(this.currentFrame);
	clone.paused = this.paused;
	clone.framerate = this.framerate;
	return clone;
}

function getMCSymbolPrototype(symbol, nominalBounds, frameBounds) {
	var prototype = cjs.extend(symbol, cjs.MovieClip);
	prototype.clone = mc_symbol_clone;
	prototype.nominalBounds = nominalBounds;
	prototype.frameBounds = frameBounds;
	return prototype;
	}


(lib.Vymezeni_Vrstva_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Vrstva_1
	this.shape = new cjs.Shape();
	this.shape.graphics.f("#051E35").s().p("AhdBRIBdiiIBeCig");
	this.shape.setTransform(69.25,2.85,0.345,0.345,90,0,0,1.2,-192.7);

	this.timeline.addTween(cjs.Tween.get(this.shape).wait(1));

}).prototype = getMCSymbolPrototype(lib.Vymezeni_Vrstva_1, null, null);


(lib.PulkruhModry_Vrstva_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Vrstva_1
	this.shape = new cjs.Shape();
	this.shape.graphics.f("#5CC5FF").s().p("An8D+QAAjSCWiUQCViVDRAAQDTAACVCVQCUCUAADSg");
	this.shape.setTransform(50.85,25.425);

	this.timeline.addTween(cjs.Tween.get(this.shape).wait(1));

}).prototype = getMCSymbolPrototype(lib.PulkruhModry_Vrstva_1, null, null);


(lib.Merak_Vrstva_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Vrstva_1
	this.shape = new cjs.Shape();
	this.shape.graphics.f("#D8D8D8").s().p("AFOD+QAAiKhihiQhhhhiLAAQiKAAhiBhQhiBiAACKIiuAAQAAjSCWiUQCViVDRAAQDTAACVCVQCUCUAADSg");
	this.shape.setTransform(50.85,25.425);

	this.timeline.addTween(cjs.Tween.get(this.shape).wait(100));

}).prototype = p = new cjs.MovieClip();


(lib.Vymezeni = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Vrstva_1_obj_
	this.Vrstva_1 = new lib.Vymezeni_Vrstva_1();
	this.Vrstva_1.name = "Vrstva_1";
	this.Vrstva_1.parent = this;
	this.Vrstva_1.setTransform(34.6,2.5,1,1,0,0,0,34.6,2.5);
	this.Vrstva_1.depth = 0;
	this.Vrstva_1.isAttachedToCamera = 0
	this.Vrstva_1.isAttachedToMask = 0
	this.Vrstva_1.layerDepth = 0
	this.Vrstva_1.layerIndex = 0
	this.Vrstva_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Vrstva_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.Vymezeni, new cjs.Rectangle(0,-0.7,5.6,6.4), null);


(lib.PulkruhModry = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Vrstva_1_obj_
	this.Vrstva_1 = new lib.PulkruhModry_Vrstva_1();
	this.Vrstva_1.name = "Vrstva_1";
	this.Vrstva_1.parent = this;
	this.Vrstva_1.setTransform(50.9,25.4,1,1,0,0,0,50.9,25.4);
	this.Vrstva_1.depth = 0;
	this.Vrstva_1.isAttachedToCamera = 0
	this.Vrstva_1.isAttachedToMask = 0
	this.Vrstva_1.layerDepth = 0
	this.Vrstva_1.layerIndex = 0
	this.Vrstva_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Vrstva_1).wait(1));

}).prototype = getMCSymbolPrototype(lib.PulkruhModry, new cjs.Rectangle(0,0,101.7,50.9), null);


(lib.Merak_Vrstva_3 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Vrstva_3
	this.instance = new lib.PulkruhModry();
	this.instance.parent = this;
	this.instance.setTransform(50.8,50.8,1,1,180,0,0,50.9,50.9);

	this.timeline.addTween(cjs.Tween.get(this.instance).to({rotation:270,x:50.9},49).to({rotation:360,y:50.9},50).wait(1));

}).prototype = p = new cjs.MovieClip();


(lib.Merak = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// timeline functions:
	this.frame_99 = function() {
		this.___loopingOver___ = true;
	}

	// actions tween:
	this.timeline.addTween(cjs.Tween.get(this).wait(99).call(this.frame_99).wait(1));

	// Vrstva_2 (mask)
	var mask = new cjs.Shape();
	mask._off = true;
	mask.graphics.p("AFPD+QAAiKhihiQhihhiLAAQiJAAhjBhQhiBiAACKIiuAAQABjSCViUQCUiVDSAAQDTAACUCVQCVCUAADSg");
	mask.setTransform(50.85,25.425);

	// Vrstva_3_obj_
	this.Vrstva_3 = new lib.Merak_Vrstva_3();
	this.Vrstva_3.name = "Vrstva_3";
	this.Vrstva_3.parent = this;
	this.Vrstva_3.setTransform(50.9,76.2,1,1,0,0,0,50.9,76.2);
	this.Vrstva_3.depth = 0;
	this.Vrstva_3.isAttachedToCamera = 0
	this.Vrstva_3.isAttachedToMask = 0
	this.Vrstva_3.layerDepth = 0
	this.Vrstva_3.layerIndex = 0
	this.Vrstva_3.maskLayerName = 0

	var maskedShapeInstanceList = [this.Vrstva_3];

	for(var shapedInstanceItr = 0; shapedInstanceItr < maskedShapeInstanceList.length; shapedInstanceItr++) {
		maskedShapeInstanceList[shapedInstanceItr].mask = mask;
	}

	this.timeline.addTween(cjs.Tween.get(this.Vrstva_3).wait(100));

	// Vrstva_1_obj_
	this.Vrstva_1 = new lib.Merak_Vrstva_1();
	this.Vrstva_1.name = "Vrstva_1";
	this.Vrstva_1.parent = this;
	this.Vrstva_1.setTransform(50.9,25.4,1,1,0,0,0,50.9,25.4);
	this.Vrstva_1.depth = 0;
	this.Vrstva_1.isAttachedToCamera = 0
	this.Vrstva_1.isAttachedToMask = 0
	this.Vrstva_1.layerDepth = 0
	this.Vrstva_1.layerIndex = 1
	this.Vrstva_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Vrstva_1).wait(100));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(0,0,101.7,50.9);


(lib.VymezeniAnimace_Vrstva_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Vrstva_1
	this.instance = new lib.Vymezeni();
	this.instance.parent = this;
	this.instance.setTransform(50.9,50.85,1,1,0,0,0,50.9,2.3);

	this.timeline.addTween(cjs.Tween.get(this.instance).to({rotation:90,x:50.85,y:50.9},49).to({rotation:180,x:50.8,y:50.85},50).wait(1));

}).prototype = p = new cjs.MovieClip();


(lib.VymezeniAnimace = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// timeline functions:
	this.frame_99 = function() {
		this.___loopingOver___ = true;
	}

	// actions tween:
	this.timeline.addTween(cjs.Tween.get(this).wait(99).call(this.frame_99).wait(1));

	// Vrstva_1_obj_
	this.Vrstva_1 = new lib.VymezeniAnimace_Vrstva_1();
	this.Vrstva_1.name = "Vrstva_1";
	this.Vrstva_1.parent = this;
	this.Vrstva_1.setTransform(34.6,51,1,1,0,0,0,34.6,51);
	this.Vrstva_1.depth = 0;
	this.Vrstva_1.isAttachedToCamera = 0
	this.Vrstva_1.isAttachedToMask = 0
	this.Vrstva_1.layerDepth = 0
	this.Vrstva_1.layerIndex = 0
	this.Vrstva_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Vrstva_1).wait(100));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(-0.1,-0.2,101.89999999999999,54.5);


(lib.Scéna_1_Vrstva_1 = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	// Vrstva_1
	this.MerakHodnota_text = new cjs.Text("180.00 l/day", "19px 'Arial'", "#141414");
	this.MerakHodnota_text.name = "MerakHodnota_text";
	this.MerakHodnota_text.textAlign = "center";
	this.MerakHodnota_text.lineHeight = 25;
	this.MerakHodnota_text.lineWidth = 110;
	this.MerakHodnota_text.parent = this;
	this.MerakHodnota_text.setTransform(60.75,59.45);

	this.DefaultMerak_anim = new lib.VymezeniAnimace();
	this.DefaultMerak_anim.name = "DefaultMerak_anim";
	this.DefaultMerak_anim.parent = this;
	this.DefaultMerak_anim.setTransform(43.3,53.85,1,1,0,0,0,34.6,51);

	this.MerakNazev_text = new cjs.Text("GFR", "19px 'Arial'");
	this.MerakNazev_text.name = "MerakNazev_text";
	this.MerakNazev_text.textAlign = "center";
	this.MerakNazev_text.lineHeight = 24;
	this.MerakNazev_text.lineWidth = 96;
	this.MerakNazev_text.parent = this;
	this.MerakNazev_text.setTransform(58.95,34.7);

	this.Merak_anim = new lib.Merak();
	this.Merak_anim.name = "Merak_anim";
	this.Merak_anim.parent = this;
	this.Merak_anim.setTransform(56.3,50.2,1,1,0,0,0,47.6,47.2);

	this.timeline.addTween(cjs.Tween.get({}).to({state:[{t:this.Merak_anim},{t:this.MerakNazev_text},{t:this.DefaultMerak_anim},{t:this.MerakHodnota_text}]}).wait(1));

}).prototype = getMCSymbolPrototype(lib.Scéna_1_Vrstva_1, null, null);


// stage content:
(lib.Measure = function(mode,startPosition,loop) {
	this.initialize(mode,startPosition,loop,{});

	this.___GetDepth___ = function(obj) {
		var depth = obj.depth;
		var cameraObj = this.___camera___instance;
		if(cameraObj && cameraObj.depth && obj.isAttachedToCamera)
		{
			depth += depth + cameraObj.depth;
		}
		return depth;
		}
	this.___needSorting___ = function() {
		for (var i = 0; i < this.getNumChildren() - 1; i++)
		{
			var prevDepth = this.___GetDepth___(this.getChildAt(i));
			var nextDepth = this.___GetDepth___(this.getChildAt(i + 1));
			if (prevDepth < nextDepth)
				return true;
		}
		return false;
	}
	this.___sortFunction___ = function(obj1, obj2) {
		return (this.exportRoot.___GetDepth___(obj2) - this.exportRoot.___GetDepth___(obj1));
	}
	this.on('tick', function (event){
		var curTimeline = event.currentTarget;
		if (curTimeline.___needSorting___()){
			this.sortChildren(curTimeline.___sortFunction___);
		}
	});

	// timeline functions:
	this.frame_0 = function() {
		this.Merak_anim = this.Vrstva_1.Merak_anim;
		this.MerakNazev_text = this.Vrstva_1.MerakNazev_text;
		this.DefaultMerak_anim = this.Vrstva_1.DefaultMerak_anim;
		this.MerakHodnota_text = this.Vrstva_1.MerakHodnota_text;
	}

	// actions tween:
	this.timeline.addTween(cjs.Tween.get(this).call(this.frame_0).wait(1));

	// Vrstva_1_obj_
	this.Vrstva_1 = new lib.Scéna_1_Vrstva_1();
	this.Vrstva_1.name = "Vrstva_1";
	this.Vrstva_1.parent = this;
	this.Vrstva_1.setTransform(60.8,53.9,1,1,0,0,0,60.8,53.9);
	this.Vrstva_1.depth = 0;
	this.Vrstva_1.isAttachedToCamera = 0
	this.Vrstva_1.isAttachedToMask = 0
	this.Vrstva_1.layerDepth = 0
	this.Vrstva_1.layerIndex = 0
	this.Vrstva_1.maskLayerName = 0

	this.timeline.addTween(cjs.Tween.get(this.Vrstva_1).wait(1));

}).prototype = p = new cjs.MovieClip();
p.nominalBounds = new cjs.Rectangle(64,43,53.599999999999994,61.7);
// library properties:
lib.properties = {
	id: '37F9B26944A66548830FF1E7685D1282',
	width: 120,
	height: 80,
	fps: 24,
	color: "#FFFFFF",
	opacity: 0.00,
	manifest: [],
	preloads: []
};



// bootstrap callback support:

(lib.Stage = function(canvas) {
	createjs.Stage.call(this, canvas);
}).prototype = p = new createjs.Stage();

p.setAutoPlay = function(autoPlay) {
	this.tickEnabled = autoPlay;
}
p.play = function() { this.tickEnabled = true; this.getChildAt(0).gotoAndPlay(this.getTimelinePosition()) }
p.stop = function(ms) { if(ms) this.seek(ms); this.tickEnabled = false; }
p.seek = function(ms) { this.tickEnabled = true; this.getChildAt(0).gotoAndStop(lib.properties.fps * ms / 1000); }
p.getDuration = function() { return this.getChildAt(0).totalFrames / lib.properties.fps * 1000; }

p.getTimelinePosition = function() { return this.getChildAt(0).currentFrame / lib.properties.fps * 1000; }

an.bootcompsLoaded = an.bootcompsLoaded || [];
if(!an.bootstrapListeners) {
	an.bootstrapListeners=[];
}

an.bootstrapCallback=function(fnCallback) {
	an.bootstrapListeners.push(fnCallback);
	if(an.bootcompsLoaded.length > 0) {
		for(var i=0; i<an.bootcompsLoaded.length; ++i) {
			fnCallback(an.bootcompsLoaded[i]);
		}
	}
};

an.compositions = an.compositions || {};
an.compositions['37F9B26944A66548830FF1E7685D1282'] = {
	getStage: function() { return exportRoot.getStage(); },
	getLibrary: function() { return lib; },
	getSpriteSheet: function() { return ss; },
	getImages: function() { return img; }
};

an.compositionLoaded = function(id) {
	an.bootcompsLoaded.push(id);
	for(var j=0; j<an.bootstrapListeners.length; j++) {
		an.bootstrapListeners[j](id);
	}
}

an.getComposition = function(id) {
	return an.compositions[id];
}


// Layer depth API : 

AdobeAn.Layer = new function() {
	this.getLayerZDepth = function(timeline, layerName)
	{
		if(layerName === "Camera")
		layerName = "___camera___instance";
		var script = "if(timeline." + layerName + ") timeline." + layerName + ".depth; else 0;";
		return eval(script);
	}
	this.setLayerZDepth = function(timeline, layerName, zDepth)
	{
		const MAX_zDepth = 10000;
		const MIN_zDepth = -5000;
		if(zDepth > MAX_zDepth)
			zDepth = MAX_zDepth;
		else if(zDepth < MIN_zDepth)
			zDepth = MIN_zDepth;
		if(layerName === "Camera")
		layerName = "___camera___instance";
		var script = "if(timeline." + layerName + ") timeline." + layerName + ".depth = " + zDepth + ";";
		eval(script);
	}
	this.removeLayer = function(timeline, layerName)
	{
		if(layerName === "Camera")
		layerName = "___camera___instance";
		var script = "if(timeline." + layerName + ") timeline.removeChild(timeline." + layerName + ");";
		eval(script);
	}
	this.addNewLayer = function(timeline, layerName, zDepth)
	{
		if(layerName === "Camera")
		layerName = "___camera___instance";
		zDepth = typeof zDepth !== 'undefined' ? zDepth : 0;
		var layer = new createjs.MovieClip();
		layer.name = layerName;
		layer.depth = zDepth;
		layer.layerIndex = 0;
		timeline.addChild(layer);
	}
}


})(createjs = createjs||{}, AdobeAn = AdobeAn||{});
var createjs, AdobeAn;