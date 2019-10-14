  </div>
  <div class="col-md-6">
  <!-- tmpl_if name="logo" --><img src="<!-- tmpl_var name="logo" -->" class="img-responsive img-thumbnail center-block" style="margin-bottom:20px"/><!-- /tmpl_if -->
  <!-- tmpl_if name="download" -->
  <div class="text-center">
    <audio src="<!-- tmpl_var name="download" -->" controls></audio>
  </div>
  <!-- /tmpl_if -->
  <div class="text-center">
  <!-- tmpl_if name="download" --><a href="<!-- tmpl_var name="download" -->" title="Télécharger" class="btn btn-primary"><i class="fa fa-download"></i></a><!-- /tmpl_if -->
  <!-- tmpl_if name="soundcloud" --><a href="<!-- tmpl_var name="soundcloud" -->" title="Écouter sur SoundCloud" class="btn btn-default"><i class="fa fa-soundcloud"></i></a><!-- /tmpl_if -->
  <!-- tmpl_if name="jamendo" --><a href="<!-- tmpl_var name="jamendo" -->" title="Écouter sur Jamendo" class="btn btn-default"><i class="fa fa-music"></i></a><!-- /tmpl_if -->
  <!-- tmpl_if name="dogmazic" --><a href="<!-- tmpl_var name="dogmazic" -->" title="Écouter sur Dogmazic" class="btn btn-default"><i class="fa fa-dogmazic"></i></a><!-- /tmpl_if -->
  <!-- tmpl_if name="peertube" --><a href="<!-- tmpl_var name="peertube" -->" title="Écouter sur PeerTube" class="btn btn-default"><i class="fa fa-peertube"></i></a><!-- /tmpl_if -->
  <!-- tmpl_if name="youtube" --><a href="<!-- tmpl_var name="youtube" -->" title="Écouter sur YouTube" class="btn btn-default"><i class="fa fa-youtube"></i></a><!-- /tmpl_if -->
  </div>
  </div>
</div>
